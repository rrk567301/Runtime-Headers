@interface CPLSyncIndicator : NSObject

+ (void)_reallyShowSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyHideSyncIndicator;
+ (void)setForeground:(BOOL)a0;

@end
