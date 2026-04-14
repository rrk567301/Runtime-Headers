@class NSNumber, NSArray;

@interface APCSIntegrityReport : APConfiguration

@property (readonly, nonatomic) NSNumber *reportingFrequency;
@property (readonly, nonatomic) NSArray *reportingPurposes;
@property (readonly, nonatomic) NSNumber *deliveryLeeway;

+ (id)path;

@end
