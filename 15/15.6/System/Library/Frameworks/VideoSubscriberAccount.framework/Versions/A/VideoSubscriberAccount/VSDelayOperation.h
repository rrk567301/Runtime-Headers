@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface VSDelayOperation : VSAsyncOperation {
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double tolerance;
@property (readonly, copy, nonatomic) NSDate *fireDate;
@property (nonatomic) char shouldIgnoreTolerance;

+ (id)delayOperationWithDelay:(double)a0;
+ (id)delayOperationWithFireDate:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancelTimer;
- (void)executionDidBegin;
- (id)initWithDelay:(double)a0 tolerance:(double)a1;
- (id)initWithFireDate:(id)a0 tolerance:(double)a1;

@end
