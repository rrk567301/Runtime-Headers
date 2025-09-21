@class NSArray, NSMutableDictionary, NSString;

@interface NSThread : NSObject {
    id _private;
    unsigned char _bytes[44];
}

@property (class, readonly) NSThread *currentThread;
@property (class, readonly, copy) NSArray *callStackReturnAddresses;
@property (class, readonly, copy) NSArray *callStackSymbols;
@property (class, readonly) char isMainThread;
@property (class, readonly) NSThread *mainThread;

@property (readonly, retain) NSMutableDictionary *threadDictionary;
@property double threadPriority;
@property long long qualityOfService;
@property (copy) NSString *name;
@property unsigned long long stackSize;
@property (readonly) char isMainThread;
@property (readonly, getter=isExecuting) char executing;
@property (readonly, getter=isFinished) char finished;
@property (readonly, getter=isCancelled) char cancelled;

+ (void)sleepForTimeInterval:(double)a0;
+ (char)isDying;
+ (char)isMultiThreaded;
+ (void)sleepUntilDate:(id)a0;
+ (void)detachNewThreadSelector:(SEL)a0 toTarget:(id)a1 withObject:(id)a2;
+ (void)detachNewThreadWithBlock:(id /* block */)a0;
+ (void)exit;
+ (char)setThreadPriority:(double)a0;
+ (double)threadPriority;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)start;
- (char)isDying;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (id)runLoop;
- (struct pthread_override_s { } *)_beginQoSOverride:(unsigned int)a0 relativePriority:(int)a1;
- (void)_endQoSOverride:(struct pthread_override_s { } *)a0;
- (void)_nq:(id)a0;
- (char)_setThreadPriority:(double)a0;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (void)main;
- (char)startAndReturnError:(id *)a0;

@end
