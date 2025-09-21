@class IDSAccount, NSMutableDictionary, IDSIncomingBatchMessageContext, IMPacketTracker, NSNumber, IDSService;

@interface IMBatchSetTrackingContext : NSObject

@property (readonly, nonatomic) IDSAccount *account;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) NSNumber *totalExpectedBatches;
@property (readonly, nonatomic) IMPacketTracker *batchTracker;
@property (readonly, nonatomic) NSMutableDictionary *trackingContexts;
@property (retain, nonatomic) IDSIncomingBatchMessageContext *contextWithSSM;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (void)submitStorageProcessingComplete;
- (void)grabContextIfAppropriate:(id)a0;
- (id)initWithAccount:(id)a0 service:(id)a1 message:(id)a2;
- (void)noteItemProcessed:(id)a0;
- (void)noteNewIncomingBatchMessage:(id)a0;

@end
