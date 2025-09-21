@class NSString, NSUUID, AFBluetoothHeadGestureConfiguration;

@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *deviceUID;
@property (readonly, nonatomic) unsigned int vendorID;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, nonatomic) char isAdvancedAppleAudioDevice;
@property (readonly, nonatomic) char supportsInEarDetection;
@property (readonly, nonatomic) char supportsVoiceTrigger;
@property (readonly, nonatomic) char supportsJustSiri;
@property (readonly, nonatomic) char supportsSpokenNotification;
@property (readonly, nonatomic) char supportsListeningModeANC;
@property (readonly, nonatomic) char supportsListeningModeTransparency;
@property (readonly, nonatomic) char supportsListeningModeAutomatic;
@property (readonly, nonatomic) char supportsConversationAwareness;
@property (readonly, nonatomic) char supportsPersonalVolume;
@property (readonly, nonatomic) char supportsAnnounceCall;
@property (readonly, copy, nonatomic) AFBluetoothHeadGestureConfiguration *headGestureConfiguration;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithAddress:(id)a0 name:(id)a1 deviceUID:(id)a2 vendorID:(unsigned int)a3 productID:(unsigned int)a4 isAdvancedAppleAudioDevice:(char)a5 supportsInEarDetection:(char)a6 supportsVoiceTrigger:(char)a7 supportsJustSiri:(char)a8 supportsSpokenNotification:(char)a9 supportsListeningModeANC:(char)a10 supportsListeningModeTransparency:(char)a11 supportsListeningModeAutomatic:(char)a12 supportsConversationAwareness:(char)a13 supportsPersonalVolume:(char)a14 supportsAnnounceCall:(char)a15 headGestureConfiguration:(id)a16;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
