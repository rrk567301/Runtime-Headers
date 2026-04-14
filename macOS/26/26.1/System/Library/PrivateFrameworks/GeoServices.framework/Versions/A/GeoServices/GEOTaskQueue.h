@class geo_isolater, NSMutableSet, NSMutableArray;

@interface GEOTaskQueue : NSObject {
    geo_isolater *_isolation;
    unsigned long long _width;
    NSMutableSet *_inFlight;
    NSMutableArray *_pending;
}

@property (nonatomic) unsigned long long width;

- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)removeTaskIfPending:(id)a0;
- (void)taskFinished:(id)a0;

@end
