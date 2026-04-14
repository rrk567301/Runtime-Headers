@class NSNumber;

@interface APFeatureFlagsEnforcingConfig : APConfiguration

@property (retain, nonatomic) NSNumber *restartEnabled;
@property (retain, nonatomic) NSNumber *retryTimeout;
@property (retain, nonatomic) NSNumber *delay;

+ (id)path;

@end
