@class NSString;

@interface SRAcousticSettingsAccessibilityHeadphoneAccommodations : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long mediaEnhanceTuning;
@property (readonly, nonatomic) long long mediaEnhanceBoosting;
@property (readonly, nonatomic) long long mediaEnhanceApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithHeadphoneAccommodationsEnabled:(BOOL)a0 mediaEnhanceTuning:(long long)a1 mediaEnhanceBoosting:(long long)a2 mediaEnhanceApplication:(long long)a3;

@end
