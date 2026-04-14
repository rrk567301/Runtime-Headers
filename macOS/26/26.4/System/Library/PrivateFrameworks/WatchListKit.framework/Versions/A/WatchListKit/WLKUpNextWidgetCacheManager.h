@interface WLKUpNextWidgetCacheManager : NSObject

+ (void)requestReload;
+ (BOOL)consumePendingInvalidation;
+ (void)requestInvalidation;

@end
