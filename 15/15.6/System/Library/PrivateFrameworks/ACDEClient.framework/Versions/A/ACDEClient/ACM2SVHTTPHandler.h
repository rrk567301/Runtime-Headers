@interface ACM2SVHTTPHandler : ACMHTTPAuthenticationHandler

- (id)convertErrorToACMError:(id)a0;
- (char)shouldValidateTGTs;

@end
