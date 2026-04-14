@interface CPLSyncIndicator : NSObject

+ (void)hideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)_reallyShowSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyHideSyncIndicator;
+ (void)setForeground:(BOOL)a0;

@end
