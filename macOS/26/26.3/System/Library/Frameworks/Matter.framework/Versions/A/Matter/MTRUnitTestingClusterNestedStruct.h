@class NSNumber, MTRUnitTestingClusterSimpleStruct, MTRDataTypeTestGlobalStruct;

@interface MTRUnitTestingClusterNestedStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c;
@property (copy, nonatomic) MTRDataTypeTestGlobalStruct *d;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
