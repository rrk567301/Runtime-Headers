@class NSMutableDictionary;
@protocol ApparentTimeHandlerDelegate;

@interface ApparentTimeHandler : NSObject {
    NSMutableDictionary *_pendingDispatchAfterBlocks;
    unsigned int _dispatchAfterSeqno;
}

@property (weak, nonatomic) id<ApparentTimeHandlerDelegate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dispatchAfterDelay:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)timerCallbackWithReference:(id)a0 at:(double)a1;

@end
