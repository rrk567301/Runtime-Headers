@class NSString, NSUUID, AFBluetoothHeadGestureConfiguration, AFBluetoothDeviceInfo;

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {
    AFBluetoothDeviceInfo *_base;
    NSString *_address;
    NSString *_name;
    NSUUID *_deviceUID;
    unsigned int _vendorID;
    unsigned int _productID;
    char _isAdvancedAppleAudioDevice;
    char _supportsInEarDetection;
    char _supportsVoiceTrigger;
    char _supportsJustSiri;
    char _supportsSpokenNotification;
    char _supportsListeningModeANC;
    char _supportsListeningModeTransparency;
    char _supportsListeningModeAutomatic;
    char _supportsConversationAwareness;
    char _supportsPersonalVolume;
    char _supportsAnnounceCall;
    AFBluetoothHeadGestureConfiguration *_headGestureConfiguration;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAddress : 1; unsigned char hasName : 1; unsigned char hasDeviceUID : 1; unsigned char hasVendorID : 1; unsigned char hasProductID : 1; unsigned char hasIsAdvancedAppleAudioDevice : 1; unsigned char hasSupportsInEarDetection : 1; unsigned char hasSupportsVoiceTrigger : 1; unsigned char hasSupportsJustSiri : 1; unsigned char hasSupportsSpokenNotification : 1; unsigned char hasSupportsListeningModeANC : 1; unsigned char hasSupportsListeningModeTransparency : 1; unsigned char hasSupportsListeningModeAutomatic : 1; unsigned char hasSupportsConversationAwareness : 1; unsigned char hasSupportsPersonalVolume : 1; unsigned char hasSupportsAnnounceCall : 1; unsigned char hasHeadGestureConfiguration : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setAddress:(id)a0;
- (void)setDeviceUID:(id)a0;
- (char)isDirty;
- (void)setProductID:(unsigned int)a0;
- (void)setVendorID:(unsigned int)a0;
- (id)getAddress;
- (id)getName;
- (void)setIsAdvancedAppleAudioDevice:(char)a0;
- (void)setSupportsInEarDetection:(char)a0;
- (void)setSupportsJustSiri:(char)a0;
- (void)setSupportsListeningModeANC:(char)a0;
- (void)setSupportsListeningModeTransparency:(char)a0;
- (void)setSupportsVoiceTrigger:(char)a0;
- (id)getDeviceUID;
- (id)getHeadGestureConfiguration;
- (char)getIsAdvancedAppleAudioDevice;
- (unsigned int)getProductID;
- (char)getSupportsAnnounceCall;
- (char)getSupportsConversationAwareness;
- (char)getSupportsInEarDetection;
- (char)getSupportsJustSiri;
- (char)getSupportsListeningModeANC;
- (char)getSupportsListeningModeAutomatic;
- (char)getSupportsListeningModeTransparency;
- (char)getSupportsPersonalVolume;
- (char)getSupportsSpokenNotification;
- (char)getSupportsVoiceTrigger;
- (unsigned int)getVendorID;
- (id)initWithBase:(id)a0;
- (void)setHeadGestureConfiguration:(id)a0;
- (void)setSupportsAnnounceCall:(char)a0;
- (void)setSupportsConversationAwareness:(char)a0;
- (void)setSupportsListeningModeAutomatic:(char)a0;
- (void)setSupportsPersonalVolume:(char)a0;
- (void)setSupportsSpokenNotification:(char)a0;

@end
