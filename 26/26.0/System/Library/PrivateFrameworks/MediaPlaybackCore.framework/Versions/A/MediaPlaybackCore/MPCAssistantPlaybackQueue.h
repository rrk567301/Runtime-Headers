@class NSString, NSDictionary, ICUserIdentity;

@interface MPCAssistantPlaybackQueue : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *contextID;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL shouldImmediatelyStartPlayback;
@property (copy, nonatomic) NSString *siriRecommendationID;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *queueGroupingID;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSString *homeKitUserIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (void)getPlaybackQueueWithDestination:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextID:(id)a0;

@end
