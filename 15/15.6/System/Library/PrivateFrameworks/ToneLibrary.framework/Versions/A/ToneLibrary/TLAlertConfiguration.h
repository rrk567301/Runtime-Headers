@class NSString, NSURL, NSDictionary;

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding> {
    char _isFrozen;
    char _hasCustomRepeatingFlag;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char _hasCustomAudioVolume;
@property (nonatomic, setter=_setAudioPlaybackInitiationDelay:) double _audioPlaybackInitiationDelay;
@property (nonatomic, setter=_setAudioVolumeRampingDuration:) double _audioVolumeRampingDuration;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (copy, nonatomic) NSURL *externalToneFileURL;
@property (nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier;
@property (copy, nonatomic) NSDictionary *externalVibrationPattern;
@property (copy, nonatomic) NSURL *externalVibrationPatternFileURL;
@property (copy, nonatomic) NSString *audioCategory;
@property (nonatomic) float audioVolume;
@property (nonatomic, getter=isForPreview) char forPreview;
@property (nonatomic) double maximumDuration;
@property (nonatomic) char prefersToDisallowExternalPlayback;
@property (nonatomic) char shouldRepeat;
@property (nonatomic) char shouldIgnoreRingerSwitch;
@property (nonatomic) char shouldForcePlayingAtUserSelectedAudioVolume;
@property (nonatomic) char shouldIgnoreAccessibilityDisabledVibrationSetting;
@property (nonatomic) long long targetDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (void)_freeze;
- (void)_throwForFrozenInstance;

@end
