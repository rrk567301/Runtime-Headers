@class NSNumber, NSArray;

@interface MTRScenesClusterAttributeValuePair : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSArray *attributeValue;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
