@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)init;
- (BOOL)isLoaded;
- (void)setControlView:(id)a0;
- (BOOL)_isLoaded;
- (void)setLoaded:(BOOL)a0;
- (void)_clearMouseTracking;

@end
