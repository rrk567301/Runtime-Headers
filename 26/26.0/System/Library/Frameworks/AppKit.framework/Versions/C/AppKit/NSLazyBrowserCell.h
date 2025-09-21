@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (void)dealloc;
- (BOOL)isLoaded;
- (void)setLoaded:(BOOL)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (oneway void)release;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (BOOL)_isLoaded;

@end
