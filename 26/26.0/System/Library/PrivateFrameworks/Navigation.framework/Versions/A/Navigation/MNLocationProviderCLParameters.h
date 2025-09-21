@interface MNLocationProviderCLParameters : NSObject

@property (nonatomic) long long activityType;
@property (nonatomic) double distanceFilter;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) BOOL fusionInfoEnabled;

- (id)init;

@end
