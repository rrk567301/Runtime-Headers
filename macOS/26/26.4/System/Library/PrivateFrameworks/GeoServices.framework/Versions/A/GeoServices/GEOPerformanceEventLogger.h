@class NSString;

@interface GEOPerformanceEventLogger : NSObject {
    NSString *_className;
    BOOL _enableSignposts;
    id _enableSignpostsListener;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithClassName:(id)a0;
- (void)logPerformanceEvent:(const char *)a0;

@end
