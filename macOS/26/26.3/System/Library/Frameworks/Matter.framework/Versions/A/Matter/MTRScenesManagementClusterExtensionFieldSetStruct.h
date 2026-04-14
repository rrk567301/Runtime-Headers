@class NSNumber, NSArray;

@interface MTRScenesManagementClusterExtensionFieldSetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSArray *attributeValueList;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
