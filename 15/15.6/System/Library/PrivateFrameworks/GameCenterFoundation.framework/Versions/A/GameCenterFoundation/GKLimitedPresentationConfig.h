@interface GKLimitedPresentationConfig : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) long long initialLimit;
@property (nonatomic) double resetPeriod;
@property (nonatomic) double minTimeBetweenAppearances;
@property (nonatomic) char enabled;

- (id)init;

@end
