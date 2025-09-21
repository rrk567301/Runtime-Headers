@class FLOWSchemaFLOWholeHouseAudioDestinationContext, NSArray, FLOWSchemaFLOWMediaPlayerPlaybackContext, NSData;

@interface FLOWSchemaFLOWMediaPlayerContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; unsigned char mediaType : 1; unsigned char isWholeHouseAudio : 1; unsigned char isMusicSubscriber : 1; unsigned char appleMusicVoiceUserSubscriptionState : 1; unsigned char appleMusicVoicePreviewOfferNotShown : 1; unsigned char isAppleMusicVoiceEligible : 1; unsigned char isSiriForAirPlayRequest : 1; unsigned char airPlayTargetedDevicesCount : 1; unsigned char airPlaySuccessfullyPlayingDevicesCount : 1; unsigned char airPlayRouteSettingStatus : 1; unsigned char userPersona : 1; } _has;
}

@property (nonatomic) int taskType;
@property (nonatomic) char hasTaskType;
@property (nonatomic) int mediaType;
@property (nonatomic) char hasMediaType;
@property (nonatomic) char isWholeHouseAudio;
@property (nonatomic) char hasIsWholeHouseAudio;
@property (retain, nonatomic) FLOWSchemaFLOWholeHouseAudioDestinationContext *wholeHouseAudioDestinationContext;
@property (nonatomic) char hasWholeHouseAudioDestinationContext;
@property (nonatomic) char isMusicSubscriber;
@property (nonatomic) char hasIsMusicSubscriber;
@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (nonatomic) int appleMusicVoiceUserSubscriptionState;
@property (nonatomic) char hasAppleMusicVoiceUserSubscriptionState;
@property (nonatomic) int appleMusicVoicePreviewOfferNotShown;
@property (nonatomic) char hasAppleMusicVoicePreviewOfferNotShown;
@property (nonatomic) char isAppleMusicVoiceEligible;
@property (nonatomic) char hasIsAppleMusicVoiceEligible;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaybackContext *mediaPlayerPlaybackContext;
@property (nonatomic) char hasMediaPlayerPlaybackContext;
@property (nonatomic) char isSiriForAirPlayRequest;
@property (nonatomic) char hasIsSiriForAirPlayRequest;
@property (nonatomic) unsigned int airPlayTargetedDevicesCount;
@property (nonatomic) char hasAirPlayTargetedDevicesCount;
@property (nonatomic) unsigned int airPlaySuccessfullyPlayingDevicesCount;
@property (nonatomic) char hasAirPlaySuccessfullyPlayingDevicesCount;
@property (nonatomic) int airPlayRouteSettingStatus;
@property (nonatomic) char hasAirPlayRouteSettingStatus;
@property (nonatomic) int userPersona;
@property (nonatomic) char hasUserPersona;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichMediaplayertaskcontext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAirPlayRouteSettingStatus;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsAppleMusicVoiceEligible;
- (void)deleteMediaType;
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeSubscriptionsCount;
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
- (void)deleteWholeHouseAudioDestinationContext;
- (id)suppressMessageUnderConditions;

@end
