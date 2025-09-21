@interface TrackedFlowCounts : NSObject

@property (nonatomic) unsigned long long rxWiFiBytes;
@property (nonatomic) unsigned long long txWiFiBytes;
@property (nonatomic) unsigned long long rxPkts;
@property (nonatomic) unsigned long long txPkts;
@property (nonatomic) unsigned long long rxDupeBytes;
@property (nonatomic) unsigned long long rxOOOBytes;
@property (nonatomic) unsigned long long txReTxBytes;
@property (nonatomic) char probedFlow;
@property (nonatomic) char probed3WHSStuckFlow;
@property (nonatomic) char probedReadStuckFlow;
@property (nonatomic) char probedWriteStuckFlow;

- (id)description;
- (void)addFlowCounts:(id)a0;
- (void)subtractFlowCounts:(id)a0;

@end
