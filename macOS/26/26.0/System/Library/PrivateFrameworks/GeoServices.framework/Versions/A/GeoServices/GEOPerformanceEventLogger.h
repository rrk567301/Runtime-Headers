@class NSString;

@interface GEOPerformanceEventLogger : NSObject {
    NSString *_className;
    BOOL _enableSignposts;
    id _enableSignpostsListener;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithClassName:(id)a0;
- (void)logPerformanceEvent:(const char *)a0;

@end
