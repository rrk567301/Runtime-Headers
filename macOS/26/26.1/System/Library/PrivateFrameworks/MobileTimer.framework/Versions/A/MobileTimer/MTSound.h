@class NSString, NSNumber;

@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long soundType;
@property (readonly, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) NSNumber *mediaItemIdentifier;
@property (readonly, nonatomic) NSString *vibrationIdentifier;
@property (readonly, nonatomic) NSNumber *soundVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSoundForCategory:(unsigned long long)a0;
+ (id)descriptionForCategory:(unsigned long long)a0;
+ (void)_saveDefaultTimerSound:(id)a0;
+ (void)setDefaultSound:(id)a0 forCategory:(unsigned long long)a1;
+ (id)toneSoundWithIdentifier:(id)a0 vibrationIdentifer:(id)a1 volume:(id)a2;
+ (long long)_alertTypeForCategory:(unsigned long long)a0;
+ (id)songSoundWithIdentifier:(id)a0 vibrationIdentifier:(id)a1 volume:(id)a2;
+ (id)_loadDefaultAlarmSound;
+ (void)_saveDefaultAlarmSound:(id)a0;
+ (id)_loadDefaultTimerSound;

- (id)initWithToneIdentifier:(id)a0 vibrationIdentifer:(id)a1 volume:(id)a2;
- (BOOL)isEqualToSound:(id)a0;
- (id)initWithMTCDSound:(id)a0;
- (id)unSoundForCategory:(unsigned long long)a0;
- (id)soundByUpdatingVolume:(id)a0;
- (id)unSound;
- (void)encodeWithCoder:(id)a0;
- (id)soundByUpdatingVibrationIdentifier:(id)a0;
- (id)initWithSound:(id)a0 usingVolume:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)interruptAudio;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaItemIdentifier:(id)a0 vibrationIdentifier:(id)a1 volume:(id)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSilent;

@end
