@class NSString, NSObject;
@protocol OS_dispatch_queue, TKSmartCardSlotNFCManaging;

@interface TKSmartCardSlotNFCSession : NSObject {
    id<TKSmartCardSlotNFCManaging> _nfcSlotManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *slotName;

- (void).cxx_destruct;
- (void)endSession;
- (id)initWithSlotName:(id)a0 nfcSlotManager:(id)a1;
- (BOOL)updateWithMessage:(id)a0 error:(id *)a1;

@end
