@class NSString;

@interface LNAvailabilityAnnotation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *introducedVersion;
@property (readonly, copy, nonatomic) NSString *deprecatedVersion;
@property (readonly, copy, nonatomic) NSString *obsoletedVersion;

+ (id)available;
+ (id)unavailable;
+ (id)deprecated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntroducedVersion:(id)a0 deprecatedVersion:(id)a1 available:(char)a2 deprecated:(char)a3;
- (id)initWithIntroducedVersion:(id)a0 deprecatedVersion:(id)a1 obsoletedVersion:(id)a2;

@end
