@class NSNumber;

@interface MRBatteryLevel : NSObject

@property (readonly, nonatomic) NSNumber *leftPercentage;
@property (readonly, nonatomic) NSNumber *rightPercentage;
@property (readonly, nonatomic) NSNumber *singlePercentage;
@property (readonly, nonatomic) NSNumber *casePercentage;

- (void).cxx_destruct;

@end
