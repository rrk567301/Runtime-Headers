@class NSString, NSNumber, NSArray;

@interface MTREcosystemInformationClusterEcosystemDeviceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSNumber *deviceNameLastEdit;
@property (copy, nonatomic) NSNumber *bridgedEndpoint;
@property (copy, nonatomic) NSNumber *originalEndpoint;
@property (copy, nonatomic) NSArray *deviceTypes;
@property (copy, nonatomic) NSArray *uniqueLocationIDs;
@property (copy, nonatomic) NSNumber *uniqueLocationIDsLastEdit;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
