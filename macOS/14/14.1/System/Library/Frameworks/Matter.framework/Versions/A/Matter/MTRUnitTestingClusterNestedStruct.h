@class NSNumber, MTRUnitTestingClusterSimpleStruct;

@interface MTRUnitTestingClusterNestedStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
