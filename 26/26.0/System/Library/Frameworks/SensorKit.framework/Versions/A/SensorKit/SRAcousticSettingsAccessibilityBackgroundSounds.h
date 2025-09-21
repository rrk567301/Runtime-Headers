@class NSString;

@interface SRAcousticSettingsAccessibilityBackgroundSounds : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long soundName;
@property (readonly, nonatomic) double relativeVolume;
@property (readonly, nonatomic, getter=isPlayWithMediaEnabled) BOOL playWithMediaEnabled;
@property (readonly, nonatomic) double relativeVolumeWithMedia;
@property (readonly, nonatomic, getter=isStopOnLockEnabled) BOOL stopOnLockEnabled;
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
- (id)initWithBackgroundSoundsEnabled:(BOOL)a0 soundName:(long long)a1 relativeVolume:(double)a2 playWithMediaEnabled:(BOOL)a3 relativeVolumeWithMedia:(double)a4 stopOnLockEnabled:(BOOL)a5;

@end
