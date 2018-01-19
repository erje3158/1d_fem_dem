args = commandArgs(trailingOnly=TRUE)

# test if there is at least one argument: if not, return an error
if (length(args)==0 || length(args)>1) {
  stop("input file must be specified.n", call.=FALSE)
}

quad <- read.csv(args[1])
print('The following is the contents of the quad.csv standard file:')
print(quad)
jpeg("quad.jpg")
plot(quad, type='o', main="Quadratic Curve: y = x^2")
dev.off()

