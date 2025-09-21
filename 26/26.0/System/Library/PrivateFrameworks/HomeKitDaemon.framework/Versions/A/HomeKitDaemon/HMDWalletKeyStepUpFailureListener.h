@class NSString, NSMutableDictionary, HMDHomeManager;
@protocol HMDHomeWalletDataSource;

@interface HMDWalletKeyStepUpFailureListener : HMFObject <HMDLibXPCServerDelegate, HMFLogging>

@property (readonly) id<HMDHomeWalletDataSource> dataSource;
@property (retain, nonatomic) NSMutableDictionary *auditedAccessories;
@property (retain, nonatomic) NSMutableDictionary *auditedAccessories;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 datasource:(id)a1;
- (id)accessoryWithReaderGroupSubIdentifierACWG:(id)a0;
- (void)didReceiveEventDictionary:(id)a0;
- (void)handleStepUpForReaderGroupSubIdentifier:(id)a0 didError:(BOOL)a1;
- (id)reachablePrimaryResidentDeviceForHome:(id)a0;
- (BOOL)shouldPerformAuditForAccessory:(id)a0 didError:(BOOL)a1;

@end
