@class NSString, NSObject;
@protocol OS_dispatch_queue, TKSmartCardSlotNFCManaging;

@interface TKSmartCardSlotNFCSession : NSObject {
    id<TKSmartCardSlotNFCManaging> _nfcSlotManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *slotName;

- (void)endSession;
- (void).cxx_destruct;
- (id)initWithSlotName:(id)a0 nfcSlotManager:(id)a1;
- (BOOL)updateWithMessage:(id)a0 error:(id *)a1;

@end
