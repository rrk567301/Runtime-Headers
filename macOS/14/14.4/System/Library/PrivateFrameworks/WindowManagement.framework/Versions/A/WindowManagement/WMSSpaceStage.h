@interface WMSSpaceStage : NSObject <BSXPCSecureCoding, NSCopying>

@property (nonatomic) void /* unknown type, empty encoding */ frame;
@property (nonatomic) void /* unknown type, empty encoding */ spaceID;
@property (nonatomic) void /* unknown type, empty encoding */ safeArea;
@property (nonatomic) void /* unknown type, empty encoding */ style;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 spaceID:(unsigned long long)a1 safeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 style:(long long)a3;

@end
