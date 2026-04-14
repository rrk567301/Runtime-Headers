@class HMELastEventStore, NSString;

@interface HMDLastEventStoreController : NSObject <HMFLogging>

@property (readonly, nonatomic) HMELastEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithWithEventStore:(id)a0;
- (void)didRemoveHome:(id)a0;
- (void)didRemoveMediaSystem:(id)a0;
- (void)didRemoveAccessory:(id)a0;

@end
