@class NSObject, MTPromise, NSDate;
@protocol OS_dispatch_source;

@interface MTPromiseWithTimeout : NSObject

@property (retain) NSDate *startDate;
@property (retain) MTPromise *promise;
@property (retain) NSObject<OS_dispatch_source> *dispatchSourceTimer;

- (void)finishWithResult:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 queue:(id)a1 timeoutBlock:(id /* block */)a2;

@end
