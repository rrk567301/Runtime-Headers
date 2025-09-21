@interface CCDisplayMeshDescriptor : CCDataDescriptor

@property (nonatomic) unsigned long long warper;
@property (nonatomic) struct CCBoraGridAlignment { long long spacing; int offset; } gridAlignment;
@property (nonatomic) BOOL generateMeshDepth;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;

@end
