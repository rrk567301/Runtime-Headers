@interface CBSpatialInteractionFilter : NSObject <CUXPCCodable, NSCopying>

@property (nonatomic) unsigned char requiredSpatialFlags;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)mask;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)blob;

@end
