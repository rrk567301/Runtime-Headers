@interface GKGraphNode3D : GKGraphNode {
    void *_cGraphNode3D;
}

@property (nonatomic) void /* unknown type, empty encoding */ position;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithPoint:(SEL)a0;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPoint:(SEL)a0;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:(id)a0;
- (float)costToNode:(id)a0;
- (void *)makeCGraphNode;
- (void *)cGraphNode3D;

@end
