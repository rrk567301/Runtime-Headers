@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (id)retain;
- (oneway void)release;
- (void)setLoaded:(BOOL)a0;
- (unsigned long long)retainCount;
- (BOOL)isLoaded;
- (void)dealloc;
- (id)init;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (BOOL)_isLoaded;

@end
