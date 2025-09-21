@class NSObject;
@protocol OS_dispatch_semaphore;

@interface PFVideoExportRangeWaitingCaller : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property struct _NSRange { unsigned long long location; unsigned long long length; } requestedRange;
@property char requestedRangeIsAvailable;
@property char cancelled;

+ (id)waitingCallerWithRequestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)waitWithTimeout:(unsigned long long)a0;
- (char)canResumeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
