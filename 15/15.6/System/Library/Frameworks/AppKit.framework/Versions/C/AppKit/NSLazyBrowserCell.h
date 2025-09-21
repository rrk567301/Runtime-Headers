@interface NSLazyBrowserCell : NSBrowserCell

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)lazyBrowserCell;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (char)isLoaded;
- (void)setControlView:(id)a0;
- (void)_clearMouseTracking;
- (char)_isLoaded;
- (void)setLoaded:(char)a0;

@end
