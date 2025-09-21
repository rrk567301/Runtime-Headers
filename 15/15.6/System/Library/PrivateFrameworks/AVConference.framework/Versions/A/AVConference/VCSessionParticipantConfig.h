@class NSData, NSString, VCNetworkFeedbackController, NSDictionary, VCSecurityKeyManager, NSObject, VCAudioCaptionsCoordinator, VCSessionMediaNegotiator;
@protocol OS_nw_activity;

@interface VCSessionParticipantConfig : NSObject {
    struct __CFDictionary { } *_spatialMetadataEntryMap;
    void *_spatialMetadata;
}

@property (retain, nonatomic) NSData *participantData;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) char audioEnabled;
@property (nonatomic) char videoEnabled;
@property (nonatomic) char screenEnabled;
@property (nonatomic) char screenControlEnabled;
@property (nonatomic) char frequencyMeteringEnabled;
@property (nonatomic) char audioMuted;
@property (nonatomic) char outOfProcessCodecsEnabled;
@property (nonatomic) float volume;
@property (nonatomic) float audioPosition;
@property (nonatomic) char audioPaused;
@property (nonatomic) char videoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (retain, nonatomic) NSData *positionalInfo;
@property (nonatomic) void *spatialMetadata;
@property (nonatomic) struct __CFDictionary { } *spatialMetadataEntryMap;
@property (nonatomic) int processId;
@property (retain, nonatomic) VCSessionMediaNegotiator *mediaNegotiator;
@property (retain, nonatomic) VCSecurityKeyManager *securityKeyManager;
@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *idsDestination;
@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) char isGKVoiceChat;
@property (nonatomic) char isLowLatencyAudio;
@property (nonatomic) long long sessionMode;
@property (nonatomic) char isOneToOneModeEnabled;
@property (nonatomic) NSObject<OS_nw_activity> *nwActivity;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;
@property (retain, nonatomic) NSDictionary *mediaStates;
@property (retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator;
@property (nonatomic) char isServerRTxEnabled;
@property (nonatomic) char isUplinkRetransmissionEnabled;
@property (nonatomic, getter=isOneToOneAuthenticationTagEnabled) char oneToOneAuthenticationTagEnabled;
@property (nonatomic) char isEnhancedJBAdaptationsEnabled;
@property (nonatomic) char enableMaxCameraBitrateVideoQualityNewTier;
@property (nonatomic) char forceL4SHighDataRate;
@property (nonatomic) char isHigherAudioREDCutoverU1Enabled;

- (void)dealloc;
- (id)description;
- (void)cleanupNwActivity;

@end
