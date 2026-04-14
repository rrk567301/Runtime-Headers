@class NSArray;

@interface ULServiceQualityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long serviceQuality;
@property (retain, nonatomic) NSArray *serviceQualityReasons;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initServiceWithQuality:(unsigned long long)a0 andReasons:(id)a1;

@end
