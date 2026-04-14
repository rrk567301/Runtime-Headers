@class geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface GEOSystemMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    geo_isolater *_isolater;
}

@property (class, readonly, nonatomic) GEOSystemMonitor *sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
