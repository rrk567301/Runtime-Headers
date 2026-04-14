@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding> {
    BOOL _allowsHandlingNonAuthenticationDialogs;
    BOOL _shouldRecordLastAuthenticationDialogResponseTime;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_handleAuthenticationStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withDialogTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (void)_handleBuyButtonAction:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleFamilyPermissionButtonAction:(id)a0 usingRequestContext:(id)a1 completion:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_handleGotoButtonAction:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)handleStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withDialogTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)handleAMSDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleDefaultStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withDialogTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (void)handleButtonAction:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
