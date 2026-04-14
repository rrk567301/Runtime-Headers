@interface CPLSyncIndicator : NSObject

+ (void)_reallyHideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;
+ (void)hideSyncIndicator;
+ (void)setForeground:(BOOL)a0;
+ (void)_reallyShowSyncIndicator;

@end
