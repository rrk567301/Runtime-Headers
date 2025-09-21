@class SRAcousticSettingsAccessibilityBackgroundSounds, NSString, SRAcousticSettingsAccessibilityHeadphoneAccommodations;

@interface SRAcousticSettingsAccessibility : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double leftRightBalance;
@property (readonly, nonatomic, getter=isMonoAudioEnabled) BOOL monoAudioEnabled;
@property (readonly, nonatomic) SRAcousticSettingsAccessibilityBackgroundSounds *backgroundSounds;
@property (readonly, nonatomic) SRAcousticSettingsAccessibilityHeadphoneAccommodations *headphoneAccommodations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithLeftRightBalance:(double)a0 monoAudioEnabled:(BOOL)a1 backgroundSounds:(id)a2 headphoneAccommodations:(id)a3;

@end
