@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)init;
- (BOOL)isLoaded;
- (void)setControlView:(id)a0;
- (void)setLoaded:(BOOL)a0;
- (BOOL)_isLoaded;
- (void)_clearMouseTracking;

@end
