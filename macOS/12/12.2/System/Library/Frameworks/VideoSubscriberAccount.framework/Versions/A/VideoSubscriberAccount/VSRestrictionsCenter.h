@interface VSRestrictionsCenter : NSObject

@property (nonatomic, getter=isAcountModificationAllowed) BOOL accountModificationAllowed;

+ (id)defaultRestrictionsCenter;

- (BOOL)canInstallAppWithRating:(long long)a0;

@end
