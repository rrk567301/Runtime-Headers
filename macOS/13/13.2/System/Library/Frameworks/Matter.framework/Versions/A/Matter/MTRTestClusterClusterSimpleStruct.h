@class NSNumber, NSData, NSString;

@interface MTRTestClusterClusterSimpleStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) NSNumber *c;
@property (copy, nonatomic) NSData *d;
@property (copy, nonatomic) NSString *e;
@property (copy, nonatomic) NSNumber *f;
@property (copy, nonatomic) NSNumber *g;
@property (copy, nonatomic) NSNumber *h;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
