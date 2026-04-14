@interface CPLSyncIndicator : NSObject

+ (void)_reallyHideSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)_reallyShowSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;
+ (void)showSyncIndicator;
+ (void)setForeground:(BOOL)a0;

@end
