@interface TRIPersistedNetworkBehavior : TRIPBMessage

@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL hasAllowsCellular;
@property (nonatomic) int networkBehavior;
@property (nonatomic) BOOL hasNetworkBehavior;
@property (nonatomic) BOOL boostPriority;
@property (nonatomic) BOOL hasBoostPriority;

+ (id)descriptor;

@end
