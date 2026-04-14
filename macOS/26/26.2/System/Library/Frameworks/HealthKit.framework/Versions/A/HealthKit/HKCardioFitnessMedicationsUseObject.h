@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL medicationsAreSet;
@property (readonly) BOOL takingCalciumChannelBlockers;
@property (readonly) BOOL takingBetaBlockers;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)a0;

@end
