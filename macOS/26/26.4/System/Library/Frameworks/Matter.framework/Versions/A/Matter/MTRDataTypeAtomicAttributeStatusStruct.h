@class NSNumber;

@interface MTRDataTypeAtomicAttributeStatusStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *statusCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
