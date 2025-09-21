@class NSArray;

@interface ULServiceQualityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long serviceQuality;
@property (retain, nonatomic) NSArray *serviceQualityReasons;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initServiceWithQuality:(unsigned long long)a0 andReasons:(id)a1;

@end
