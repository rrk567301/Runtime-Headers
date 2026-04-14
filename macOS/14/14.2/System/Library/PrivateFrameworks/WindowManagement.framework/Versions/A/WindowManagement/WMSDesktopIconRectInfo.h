@interface WMSDesktopIconRectInfo : NSObject <BSXPCSecureCoding, NSCopying>

@property (nonatomic) void /* unknown type, empty encoding */ iconRect;
@property (nonatomic) void /* unknown type, empty encoding */ labelRect;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithIconRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
