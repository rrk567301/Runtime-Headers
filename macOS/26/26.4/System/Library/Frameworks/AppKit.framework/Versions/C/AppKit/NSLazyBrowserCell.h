@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (BOOL)isLoaded;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)setLoaded:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (BOOL)_isLoaded;

@end
