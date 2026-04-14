@class NSNumber, NSArray, MTRTestClusterClusterSimpleStruct;

@interface MTRTestClusterClusterNestedStructList : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) MTRTestClusterClusterSimpleStruct *c;
@property (copy, nonatomic) NSArray *d;
@property (copy, nonatomic) NSArray *e;
@property (copy, nonatomic) NSArray *f;
@property (copy, nonatomic) NSArray *g;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
