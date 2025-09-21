@class NSString;

@interface SiriMessageTypes.RequestContextData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ audioSource;
    void /* unknown type, empty encoding */ audioDestination;
    void /* unknown type, empty encoding */ responseMode;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ isTriggerlessFollowup;
    void /* unknown type, empty encoding */ bargeInModes;
    void /* unknown type, empty encoding */ approximatePreviousTTSInterval;
    void /* unknown type, empty encoding */ deviceRestrictions;
    void /* unknown type, empty encoding */ voiceTriggerEventInfo;
    void /* unknown type, empty encoding */ voiceAudioSessionId;
    void /* unknown type, empty encoding */ isSystemApertureEnabled;
    void /* unknown type, empty encoding */ isLiveActivitiesSupported;
    void /* unknown type, empty encoding */ isInAmbient;
    void /* unknown type, empty encoding */ isDeviceShowingLockScreen;
    void /* unknown type, empty encoding */ isDeviceLocked;
    void /* unknown type, empty encoding */ userProfileMetadata;
    void /* unknown type, empty encoding */ activationTime;
    void /* unknown type, empty encoding */ suggestionRequestType;
    void /* unknown type, empty encoding */ conjunctionInfo;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
