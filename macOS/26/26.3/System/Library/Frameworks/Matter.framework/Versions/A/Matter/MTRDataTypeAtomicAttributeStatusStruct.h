@class NSNumber;

@interface MTRDataTypeAtomicAttributeStatusStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *statusCode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
