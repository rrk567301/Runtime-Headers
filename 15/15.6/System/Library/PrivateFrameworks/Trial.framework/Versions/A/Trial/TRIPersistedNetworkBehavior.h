@interface TRIPersistedNetworkBehavior : TRIPBMessage

@property (nonatomic) char allowsCellular;
@property (nonatomic) char hasAllowsCellular;
@property (nonatomic) int networkBehavior;
@property (nonatomic) char hasNetworkBehavior;

+ (id)descriptor;

@end
