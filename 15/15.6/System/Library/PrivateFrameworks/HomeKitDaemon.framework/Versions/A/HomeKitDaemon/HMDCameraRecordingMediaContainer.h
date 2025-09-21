@interface HMDCameraRecordingMediaContainer : HAPNumberParser <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;

+ (id)arrayWithContainerTypes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainer:(long long)a0;
- (void)description:(id)a0 indent:(id)a1;

@end
