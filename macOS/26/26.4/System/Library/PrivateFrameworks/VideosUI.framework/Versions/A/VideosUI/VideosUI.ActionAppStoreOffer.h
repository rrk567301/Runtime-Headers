@class NSResponder;

@interface VideosUI.ActionAppStoreOffer : VUIAction {
    void /* unknown type, empty encoding */ groupId;
    void /* unknown type, empty encoding */ requiresAuthentication;
    void /* unknown type, empty encoding */ defaultMessage;
    void /* unknown type, empty encoding */ messagesByResult;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(NSResponder *)a0 completionHandler:(void (^)(BOOL))a1;

@end
