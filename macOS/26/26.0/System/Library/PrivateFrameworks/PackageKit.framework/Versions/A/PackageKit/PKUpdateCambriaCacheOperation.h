@interface PKUpdateCambriaCacheOperation : PKInstallOperation

+ (BOOL)cambriaAvailable;

- (void)main;
- (int)installState;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
