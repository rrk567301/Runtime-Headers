@class SLWindowFilter;

@interface SLWindowMirroringFilter : NSObject {
    SLWindowFilter *_filter;
}

- (id)init;
- (void)dealloc;
- (id)initWithFilter:(id)a0;
- (id)initWithIncludedApps:(id)a0;
- (id)initWithIncludedWindows:(id)a0;
- (id)initWithIncludedWindows:(id)a0 andIncludedApps:(id)a1;
- (void)setShieldWindow:(id)a0;
- (id)shieldWindow;
- (id)windowFilter;

@end
