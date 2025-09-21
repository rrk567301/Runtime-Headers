@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSArray *apps;
@property (copy, nonatomic) NSNumber *desiredPurgeAmount;
@property (nonatomic) char offloadOnly;
@property (nonatomic) char performAvailablityCheck;
@property (nonatomic) char skipLaunchCheck;
@property (nonatomic) long long urgency;
@property (copy, nonatomic) NSString *volume;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVolume:(id)a0 urgency:(long long)a1;

@end
