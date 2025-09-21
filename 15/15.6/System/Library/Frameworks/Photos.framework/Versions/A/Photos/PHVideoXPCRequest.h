@class PHVideoRequestBehaviorSpec;

@interface PHVideoXPCRequest : PLResourceXPCRequest

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskIdentifier:(id)a0 assetObjectID:(id)a1 size:(struct CGSize { double x0; double x1; })a2 behavior:(id)a3;

@end
