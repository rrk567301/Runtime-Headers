@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (unsigned long long)retainCount;
- (BOOL)isLoaded;
- (id)retain;
- (id)init;
- (void)dealloc;
- (void)setLoaded:(BOOL)a0;
- (oneway void)release;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (BOOL)_isLoaded;

@end
