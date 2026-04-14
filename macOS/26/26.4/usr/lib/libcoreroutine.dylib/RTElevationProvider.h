@class NSObject;
@protocol OS_dispatch_queue;

@interface RTElevationProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)_fetchElevations:(id)a0 handler:(id /* block */)a1;
- (void)fetchElevations:(id)a0 handler:(id /* block */)a1;
- (BOOL)hasAltimeter;

@end
