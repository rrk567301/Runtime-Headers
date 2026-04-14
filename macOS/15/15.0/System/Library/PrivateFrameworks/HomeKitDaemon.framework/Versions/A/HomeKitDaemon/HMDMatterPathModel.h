@class NSNumber;

@interface HMDMatterPathModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *commandID;
@property (copy, nonatomic) NSNumber *eventID;

+ (id)properties;

@end
