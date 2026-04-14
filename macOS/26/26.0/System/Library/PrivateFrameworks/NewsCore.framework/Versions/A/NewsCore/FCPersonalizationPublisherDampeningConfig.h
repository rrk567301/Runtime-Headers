@class NSDictionary;

@interface FCPersonalizationPublisherDampeningConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dampeningFactorMapping;
@property (nonatomic) unsigned long long dampeningStrategy;
@property (nonatomic) double defaultDampeningFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDampeningFactorMapping:(id)a0 dampeningStrategy:(unsigned long long)a1 defaultDampeningFactor:(double)a2;

@end
