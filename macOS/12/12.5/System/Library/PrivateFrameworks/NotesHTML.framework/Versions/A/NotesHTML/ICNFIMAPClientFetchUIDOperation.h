@interface ICNFIMAPClientFetchUIDOperation : ICNFIMAPClientFetchOperation

- (id)commandTypeString;
- (BOOL)shouldSendAgainOnError;
- (BOOL)_isLegalRange:(struct { unsigned long long x0; unsigned long long x1; })a0;

@end
