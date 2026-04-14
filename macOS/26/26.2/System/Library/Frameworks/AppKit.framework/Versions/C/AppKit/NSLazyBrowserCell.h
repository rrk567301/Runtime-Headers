@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (BOOL)isLoaded;
- (id)retain;
- (void)setLoaded:(BOOL)a0;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (BOOL)_isLoaded;

@end
