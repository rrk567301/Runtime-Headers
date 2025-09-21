@class NSError;

@interface VideosUI.VUIBagServiceProxyObjC : NSObject

+ (void)prewarm;
+ (void)fetchCategoriesWithCompletionHandler:(void (^)(long long, NSError *))a0;
+ (void)isFullTVAppEnabledWithCompletionHandler:(void (^)(BOOL, NSError *))a0;

- (id)init;

@end
