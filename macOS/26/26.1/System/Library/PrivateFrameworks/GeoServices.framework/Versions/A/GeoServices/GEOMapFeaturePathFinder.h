@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOMapFeaturePathFinder : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic) int transportType;
@property (nonatomic) double maxDistanceFromRoad;

- (void).cxx_destruct;
- (id)init;
- (void)findPathFrom:(struct { double x0; double x1; double x2; })a0 to:(struct { double x0; double x1; double x2; })a1 finishedHandler:(id /* block */)a2;
- (id)initWithTransportType:(int)a0 callbackQueue:(id)a1;

@end
