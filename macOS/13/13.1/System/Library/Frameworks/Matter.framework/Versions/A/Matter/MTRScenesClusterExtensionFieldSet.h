@class NSNumber, NSArray;

@interface MTRScenesClusterExtensionFieldSet : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *clusterId;
@property (copy, nonatomic) NSArray *attributeValueList;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
