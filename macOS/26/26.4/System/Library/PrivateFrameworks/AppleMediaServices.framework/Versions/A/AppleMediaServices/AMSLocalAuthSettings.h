@class AMSBag;

@interface AMSLocalAuthSettings : NSObject

+ (void)isPasscodePurchaseFallbackAvailableWith:(AMSBag *)a0 completion:(void (^)(BOOL))a1 completionHandler:(void (^)(void))a2;

- (id)init;

@end
