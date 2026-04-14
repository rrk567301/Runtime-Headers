@interface WMSSceneShadowProperties : NSObject <BSXPCSecureCoding, NSCopying>

@property (nonatomic) void /* unknown type, empty encoding */ activeRadius;
@property (nonatomic) void /* unknown type, empty encoding */ activeDensity;
@property (nonatomic) void /* unknown type, empty encoding */ activeVerticalOffset;
@property (nonatomic) void /* unknown type, empty encoding */ activeHardRimStyle;
@property (nonatomic) void /* unknown type, empty encoding */ activeRimDensity;
@property (nonatomic) void /* unknown type, empty encoding */ activeClipTop;
@property (nonatomic) void /* unknown type, empty encoding */ inactiveRadius;
@property (nonatomic) void /* unknown type, empty encoding */ inactiveDensity;
@property (nonatomic) void /* unknown type, empty encoding */ inactiveVerticalOffset;
@property (nonatomic) void /* unknown type, empty encoding */ inactiveHardRimStyle;
@property (nonatomic) void /* unknown type, empty encoding */ inactiveRimDensity;
@property (nonatomic) void /* unknown type, empty encoding */ inactiveClipTop;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithActiveRadius:(float)a0 activeDensity:(float)a1 activeVerticalOffset:(float)a2 activeHardRimStyle:(BOOL)a3 activeRimDensity:(float)a4 activeClipTop:(BOOL)a5 inactiveRadius:(float)a6 inactiveDensity:(float)a7 inactiveVerticalOffset:(float)a8 inactiveHardRimStyle:(BOOL)a9 inactiveRimDensity:(float)a10 inactiveClipTop:(BOOL)a11;

@end
