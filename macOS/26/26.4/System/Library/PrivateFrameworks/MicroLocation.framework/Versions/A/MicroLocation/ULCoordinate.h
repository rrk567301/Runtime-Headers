@interface ULCoordinate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (nonatomic) float yaw;
@property (nonatomic) long long submapIndex;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) unsigned long long deviceClassFrame;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasDirectionalContext;

+ (id)invalid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTranslation:(SEL)a0 yaw:(float)a1 submapIndex:(long long)a2 isTracked:(BOOL)a3 deviceClassFrame:(unsigned long long)a4;

@end
