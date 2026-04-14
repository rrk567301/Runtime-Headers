@class NSNumber;

@interface MTRScenesManagementClusterAttributeValuePair : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *attributeValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
