@interface CPLSyncIndicator : NSObject

+ (void)_reallyHideSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyShowSyncIndicator;
+ (void)setForeground:(BOOL)a0;

@end
