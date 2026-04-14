@class NSArray, NSString, HMDPreferredResidentsList, NSObject;
@protocol OS_dispatch_queue, HMDResidentDeviceManagerContext;

@interface HMDResidentSelectionPreferredResidents : NSObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<HMDResidentDeviceManagerContext> context;
@property (retain, nonatomic) NSArray *residentStatusList;
@property (readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id /* block */)comparatorForPreferredResidentsListSource;
- (id)initWithWithContext:(id)a0 residentStatusList:(id)a1;
- (id)residentStatusFromPreferredSource;

@end
