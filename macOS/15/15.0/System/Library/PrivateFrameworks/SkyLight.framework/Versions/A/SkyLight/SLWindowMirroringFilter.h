@class SLWindowFilter;

@interface SLWindowMirroringFilter : NSObject {
    SLWindowFilter *_filter;
}

- (void)dealloc;
- (id)initWithFilter:(id)a0;
- (id)initWithIncludedApps:(id)a0;
- (id)initWithIncludedWindows:(id)a0;
- (id)windowFilter;

@end
