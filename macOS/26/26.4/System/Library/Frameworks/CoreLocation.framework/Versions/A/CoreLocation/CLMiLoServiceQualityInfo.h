@class NSArray;

@interface CLMiLoServiceQualityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long serviceQuality;
@property (readonly, nonatomic) NSArray *serviceQualityReasons;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithQuality:(unsigned long long)a0 andReasons:(id)a1;

@end
