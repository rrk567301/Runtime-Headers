@class NSString, TRIPersistedNetworkBehavior;

@interface TRIPersistedTaskAttribution : TRIPBMessage

@property (copy, nonatomic) NSString *applicationBundleId;
@property (nonatomic) char hasApplicationBundleId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) char hasCloudKitContainer;
@property (copy, nonatomic) NSString *teamId;
@property (nonatomic) char hasTeamId;
@property (retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic) char hasNetworkBehavior;

+ (id)descriptor;

@end
