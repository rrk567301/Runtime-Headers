@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject

@property (readonly, nonatomic) CMSpringTrackerInternal *_internal;

+ (char)isAvailable;

- (void)dealloc;
- (id)init;
- (char)isTracking;
- (void)startWithHandler:(id /* block */)a0;
- (void)querySleepDataFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)stopWithHandler:(id /* block */)a0;

@end
