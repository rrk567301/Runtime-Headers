@interface ICNFIMAPClientFetchUIDOperation : ICNFIMAPClientFetchOperation

- (char)_isLegalRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)commandTypeString;
- (char)shouldSendAgainOnError;

@end
