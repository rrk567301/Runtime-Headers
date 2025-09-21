@class FLOWSchemaFLOWholeHouseAudioDestinationContext, NSArray, FLOWSchemaFLOWMediaPlayerPlaybackContext, NSData;

@interface FLOWSchemaFLOWMediaPlayerContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; unsigned char mediaType : 1; unsigned char isWholeHouseAudio : 1; unsigned char isMusicSubscriber : 1; unsigned char appleMusicVoiceUserSubscriptionState : 1; unsigned char appleMusicVoicePreviewOfferNotShown : 1; unsigned char isAppleMusicVoiceEligible : 1; unsigned char isSiriForAirPlayRequest : 1; unsigned char airPlayTargetedDevicesCount : 1; unsigned char airPlaySuccessfullyPlayingDevicesCount : 1; unsigned char airPlayRouteSettingStatus : 1; unsigned char userPersona : 1; unsigned char wasOnScreenItemSelected : 1; } _has;
}

@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL isWholeHouseAudio;
@property (nonatomic) BOOL hasIsWholeHouseAudio;
@property (retain, nonatomic) FLOWSchemaFLOWholeHouseAudioDestinationContext *wholeHouseAudioDestinationContext;
@property (nonatomic) BOOL hasWholeHouseAudioDestinationContext;
@property (nonatomic) BOOL isMusicSubscriber;
@property (nonatomic) BOOL hasIsMusicSubscriber;
@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (nonatomic) int appleMusicVoiceUserSubscriptionState;
@property (nonatomic) BOOL hasAppleMusicVoiceUserSubscriptionState;
@property (nonatomic) int appleMusicVoicePreviewOfferNotShown;
@property (nonatomic) BOOL hasAppleMusicVoicePreviewOfferNotShown;
@property (nonatomic) BOOL isAppleMusicVoiceEligible;
@property (nonatomic) BOOL hasIsAppleMusicVoiceEligible;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaybackContext *mediaPlayerPlaybackContext;
@property (nonatomic) BOOL hasMediaPlayerPlaybackContext;
@property (nonatomic) BOOL isSiriForAirPlayRequest;
@property (nonatomic) BOOL hasIsSiriForAirPlayRequest;
@property (nonatomic) unsigned int airPlayTargetedDevicesCount;
@property (nonatomic) BOOL hasAirPlayTargetedDevicesCount;
@property (nonatomic) unsigned int airPlaySuccessfullyPlayingDevicesCount;
@property (nonatomic) BOOL hasAirPlaySuccessfullyPlayingDevicesCount;
@property (nonatomic) int airPlayRouteSettingStatus;
@property (nonatomic) BOOL hasAirPlayRouteSettingStatus;
@property (nonatomic) int userPersona;
@property (nonatomic) BOOL hasUserPersona;
@property (nonatomic) BOOL wasOnScreenItemSelected;
@property (nonatomic) BOOL hasWasOnScreenItemSelected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichMediaplayertaskcontext;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)activeSubscriptionsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIsAppleMusicVoiceEligible;
- (void)deleteAirPlayRouteSettingStatus;
- (void)deleteMediaType;
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (void)addActiveSubscriptions:(int)a0;
- (void)clearActiveSubscriptions;
- (void)deleteActiveSubscriptions;
- (void)deleteAirPlaySuccessfullyPlayingDevicesCount;
- (void)deleteAirPlayTargetedDevicesCount;
- (void)deleteAppleMusicVoicePreviewOfferNotShown;
- (void)deleteAppleMusicVoiceUserSubscriptionState;
- (void)deleteIsMusicSubscriber;
- (void)deleteIsSiriForAirPlayRequest;
- (void)deleteIsWholeHouseAudio;
- (void)deleteMediaPlayerPlaybackContext;
- (void)deleteTaskType;
- (void)deleteUserPersona;
- (void)deleteWasOnScreenItemSelected;
- (void)deleteWholeHouseAudioDestinationContext;

@end
