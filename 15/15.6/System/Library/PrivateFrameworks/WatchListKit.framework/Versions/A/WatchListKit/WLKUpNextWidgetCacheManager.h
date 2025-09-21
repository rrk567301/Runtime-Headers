@interface WLKUpNextWidgetCacheManager : NSObject

+ (char)consumePendingInvalidation;
+ (void)requestInvalidation;
+ (void)requestReload;

@end
