@class NSString;

@interface CHSGlassOptions : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL wantsSubduedGlass;
@property (readonly, nonatomic) BOOL wantsWhitePointBoost;
@property (readonly, nonatomic) NSString *backdropGroupName;
@property (readonly, nonatomic) BOOL wantsHighlightsDisplayAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)withSubduedGlass;
+ (id)withWhitePointBoost;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithGlassOptions:(id)a0;

@end
