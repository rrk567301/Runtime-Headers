@class NSObject;
@protocol OS_dispatch_queue, WFScreenOnObserverDelegate;

@interface WFScreenOnObserver : NSObject

@property (nonatomic) int token;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL screenOn;
@property (weak, nonatomic) id<WFScreenOnObserverDelegate> delegate;

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)stateChanged:(BOOL)a0;

@end
