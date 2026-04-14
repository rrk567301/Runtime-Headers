@class NSArray;

@interface ULServiceQualityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long serviceQuality;
@property (retain, nonatomic) NSArray *serviceQualityReasons;

+ (id)new;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initServiceWithQuality:(unsigned long long)a0 andReasons:(id)a1;

@end
