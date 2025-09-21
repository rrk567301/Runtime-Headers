@class NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface SGXpcTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    struct atomic_flag { _Atomic BOOL _Value; } _done;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)transactionWithName:(const void *)a0;

- (void)setTimeout:(double)a0;
- (void)dealloc;
- (void)done;
- (id)init;
- (id)initWithName:(const void *)a0;
- (void).cxx_destruct;
- (BOOL)doneReturningWasDone;

@end
