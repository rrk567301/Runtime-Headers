@class NSObject, GEOSQLiteDB, geo_isolater, NSMutableArray;
@protocol OS_dispatch_source;

@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB *_db;
    geo_isolater *_isolator;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)cancelTimer;
- (void)flushOnDBQueue;
- (void)dealloc;
- (void)enqueueOperation:(id)a0;
- (void)flush;
- (void)scheduleTimer;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
