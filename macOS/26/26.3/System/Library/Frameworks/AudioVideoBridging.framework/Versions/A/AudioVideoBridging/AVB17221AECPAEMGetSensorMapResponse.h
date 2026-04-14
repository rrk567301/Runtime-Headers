@class NSArray;

@interface AVB17221AECPAEMGetSensorMapResponse : AVB17221AECPAEMGetMapResponse

@property (copy, nonatomic) NSArray *mappings;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingMappings;

- (id)mappings;
- (id)init;
- (void)setMappings:(id)a0;

@end
