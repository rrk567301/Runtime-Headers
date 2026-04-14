@class NSResponder;

@interface VideosUI.ActionAppStoreOffer : VUIAction {
    void /* unknown type, empty encoding */ groupId;
    void /* unknown type, empty encoding */ requiresAuthentication;
    void /* unknown type, empty encoding */ defaultMessage;
    void /* unknown type, empty encoding */ messagesByResult;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(NSResponder *)a0 completionHandler:(void (^)(BOOL))a1;

@end
