@class MSVTimer, MSVPersistentTimer;

@interface MRPersistentTimer : NSObject {
    MSVPersistentTimer *_pTimer;
    MSVTimer *_timer;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (BOOL)usePersistentTimer;

- (void)invalidateWithReason:(id)a0;
- (void)invalidate;
- (id)initWithInterval:(double)a0 name:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;

@end
