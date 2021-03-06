% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/mxtr.R
\name{mxtr}
\alias{mxtr}
\title{Numerical and Symbolic Matrix Trace}
\usage{
mxtr(x)
}
\arguments{
\item{x}{\code{numeric} or \code{character} matrix.}
}
\value{
\code{numeric} or \code{character}.
}
\description{
Computes the trace of a \code{numeric} or \code{character} matrix.
}
\examples{
### numeric matrix
x <- matrix(1:4, nrow = 2)
mxtr(x)

### character matrix
x <- matrix(letters[1:4], nrow = 2)
mxtr(x)

}
\references{
Guidotti, E. (2020). "calculus: High dimensional numerical and symbolic calculus in R". \url{https://arxiv.org/abs/2101.00086}
}
\seealso{
Other matrix algebra: 
\code{\link{mxdet}()},
\code{\link{mxinv}()},
\code{\link{mx}()}
}
\concept{matrix algebra}
