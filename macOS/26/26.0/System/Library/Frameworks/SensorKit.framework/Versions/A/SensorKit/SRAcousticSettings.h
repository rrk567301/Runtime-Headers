@class NSString, SRAcousticSettingsAccessibility, NSNumber, SRAcousticSettingsMusicEQ;

@interface SRAcousticSettings : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnvironmentalSoundMeasurementsEnabled) BOOL environmentalSoundMeasurementsEnabled;
@property (readonly, nonatomic) long long audioExposureSampleLifetime;
@property (readonly, nonatomic) NSNumber *headphoneSafetyAudioLevel;
@property (readonly, nonatomic) SRAcousticSettingsMusicEQ *musicEQSettings;
@property (readonly, nonatomic) SRAcousticSettingsAccessibility *accessibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithEnvironmentalSoundMeasurementsEnabled:(BOOL)a0 audioExposureSampleLifetime:(long long)a1 headphoneSafetyAudioLevel:(id)a2 musicEQSettings:(id)a3 accessibilitySettings:(id)a4;

@end
