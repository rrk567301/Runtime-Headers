@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _options;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char medicationsAreSet;
@property (readonly) char takingCalciumChannelBlockers;
@property (readonly) char takingBetaBlockers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)a0;

@end
