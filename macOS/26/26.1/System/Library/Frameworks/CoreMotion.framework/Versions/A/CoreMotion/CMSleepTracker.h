@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject

@property (readonly, nonatomic) CMSpringTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (void)startWithHandler:(id /* block */)a0;
- (id)init;
- (BOOL)isTracking;
- (void)querySleepDataFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)stopWithHandler:(id /* block */)a0;

@end
