@class NSString;

@interface CDPWalrusSecurityProxyImpl : NSObject <CDPWalrusSecurityProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebAccessStatusEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)webAccessStatusWithCompletion:(id /* block */)a0;

@end
