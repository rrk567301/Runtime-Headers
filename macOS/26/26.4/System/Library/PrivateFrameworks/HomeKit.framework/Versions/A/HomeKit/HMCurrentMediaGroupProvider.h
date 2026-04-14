@class _HMContext, HMCurrentMediaGroup, NSString;
@protocol HMCurrentMediaGroupProviderDelegate, HMCurrentMediaGroupProviderDataSource;

@interface HMCurrentMediaGroupProvider : NSObject <HMFLogging>

@property (weak) id<HMCurrentMediaGroupProviderDataSource> dataSource;
@property (retain, nonatomic) _HMContext *context;
@property (nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) HMCurrentMediaGroup *lastSentCurrentMediaGroup;
@property (weak) id<HMCurrentMediaGroupProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)unknownRoomName;
+ (unsigned long long)_participantRoleForMediaSystemRole:(id)a0;
+ (id)unknownRoomIdentifier;

- (void)merge;
- (id)homeManager;
- (void).cxx_destruct;
- (void)subscribe;
- (void)_merge;
- (void)_mergeWithCurrentAppleTVAccessory:(id)a0 home:(id)a1;
- (void)_mergeWithCurrentAppleTVAccessory:(id)a0 soloHomePodDestination:(id)a1 home:(id)a2;
- (void)_mergeWithCurrentAppleTVAccessory:(id)a0 stereoPairDestination:(id)a1 home:(id)a2;
- (void)_mergeWithCurrentHomePodAccessory:(id)a0 home:(id)a1;
- (void)_mergeWithCurrentHomePodAccessory:(id)a0 mediaSystem:(id)a1;
- (void)_notifyClientOfCurrentMediaGroup:(id)a0;
- (void)_notifyClientOfCurrentMediaGroupWithCurrentAccessory:(id)a0 destinationAccessory:(id)a1 sourceAccessory:(id)a2;
- (void)_notifyClientOfCurrentMediaGroupWithCurrentAccessory:(id)a0 mediaSystem:(id)a1 sourceAccessory:(id)a2;
- (void)_notifyClientOfCurrentMediaGroupWithNoCurrentAccessory;
- (void)_notifyClientOfCurrentMediaGroupWithSoloAccessory:(id)a0;
- (void)_notifyClientOfCurrentMediaGroupWithSoloAppleTVAccessory:(id)a0;
- (void)_notifyClientOfCurrentMediaGroupWithSoloHomePodAccessory:(id)a0;
- (void)_subscribe;
- (id)initWithDataSource:(id)a0 context:(id)a1;

@end
