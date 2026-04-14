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

- (id)homeManager;
- (void).cxx_destruct;
- (void)merge;
- (void)_subscribe;
- (void)subscribe;
- (void)_merge;
- (void)_mergeWithCurrentAppleTVAccessory:(id)a0;
- (void)_mergeWithCurrentAppleTVAccessory:(id)a0 soloHomePodDestination:(id)a1;
- (void)_mergeWithCurrentAppleTVAccessory:(id)a0 stereoPairDestination:(id)a1;
- (void)_mergeWithCurrentHomePodAccessory:(id)a0;
- (void)_notifyClientOfCurrentMediaGroup:(id)a0;
- (void)_notifyClientOfCurrentMediaGroupWithCurrentAccessory:(id)a0 mediaGroupType:(unsigned long long)a1;
- (void)_notifyClientOfCurrentMediaGroupWithNoCurrentAccessory;
- (id)initWithDataSource:(id)a0 context:(id)a1;

@end
