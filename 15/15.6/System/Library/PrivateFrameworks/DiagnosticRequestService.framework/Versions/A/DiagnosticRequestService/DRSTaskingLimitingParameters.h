@interface DRSTaskingLimitingParameters : NSObject

@property (readonly, nonatomic) unsigned long long acceptedConfigCountCap;
@property (readonly, nonatomic) double taskingHysteresisInterval;
@property (readonly, nonatomic) double perTeamTaskingHysteresisInterval;

+ (id)_seedParameters;
+ (id)_customerParameters;
+ (id)_disabledParameters;
+ (id)_internalParameters;
+ (id)defaultDeviceParameters;
+ (id)parametersForPlatform:(unsigned char)a0 isInternal:(char)a1 isSeed:(char)a2 isCarrier:(char)a3 taskingIsEnabled:(char)a4;

- (char)isEqual:(id)a0;
- (id)initWithAcceptConfigCountCap:(unsigned long long)a0 taskingHysteresisInterval:(double)a1;

@end
