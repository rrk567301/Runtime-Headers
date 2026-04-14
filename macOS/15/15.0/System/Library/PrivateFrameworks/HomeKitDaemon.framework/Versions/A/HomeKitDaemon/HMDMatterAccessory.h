@class NSString, HMDMatterAccessoryAdapter, HMMTRAccessoryServer;
@protocol HMDMatterAccessoryProtocol;

@interface HMDMatterAccessory : HMDAccessory <HMFLogging>

@property (retain, nonatomic) HMDMatterAccessoryAdapter<HMDMatterAccessoryProtocol> *matterAdapter;
@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)populateModelObject:(id)a0 version:(long long)a1;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;

@end
