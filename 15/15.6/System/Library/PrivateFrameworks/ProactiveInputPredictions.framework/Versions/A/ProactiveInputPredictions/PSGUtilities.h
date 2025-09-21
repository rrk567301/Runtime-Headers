@interface PSGUtilities : NSObject

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)a0 withLocale:(id)a1;
- (id)localizedStringForKey:(id)a0 withLocale:(id)a1 onlyIfCached:(char)a2 wasCached:(char *)a3;
- (id /* block */)prewarmCacheForLocale:(id)a0 usingQueue:(id)a1;

@end
