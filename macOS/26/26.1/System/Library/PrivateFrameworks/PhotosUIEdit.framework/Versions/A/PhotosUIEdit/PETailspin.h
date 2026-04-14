@class NSObject;
@protocol OS_dispatch_queue;

@interface PETailspin : NSObject

@property (nonatomic) struct tailspin_config { } *tailspinConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tailspinPropertyQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)dumpTailspinOutputWithCompletion:(id /* block */)a0;

@end
