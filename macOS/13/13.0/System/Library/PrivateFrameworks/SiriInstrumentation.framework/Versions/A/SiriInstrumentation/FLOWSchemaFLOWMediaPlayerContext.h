@class FLOWSchemaFLOWholeHouseAudioDestinationContext, NSArray, FLOWSchemaFLOWMediaPlayerPlaybackContext, NSData;

@interface FLOWSchemaFLOWMediaPlayerContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; unsigned char mediaType : 1; unsigned char isWholeHouseAudio : 1; unsigned char isMusicSubscriber : 1; unsigned char appleMusicVoiceUserSubscriptionState : 1; unsigned char appleMusicVoicePreviewOfferNotShown : 1; unsigned char isAppleMusicVoiceEligible : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichMediaplayertaskcontext;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppleMusicVoicePreviewOfferNotShown;
- (void)deleteTaskType;
- (void)deleteMediaType;
- (void)deleteIsWholeHouseAudio;
- (void)deleteWholeHouseAudioDestinationContext;
- (void)deleteIsMusicSubscriber;
- (void)clearActiveSubscriptions;
- (void)deleteActiveSubscriptions;
- (void)addActiveSubscriptions:(int)a0;
- (unsigned long long)activeSubscriptionsCount;
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (void)deleteAppleMusicVoiceUserSubscriptionState;
- (void)deleteIsAppleMusicVoiceEligible;
- (void)deleteMediaPlayerPlaybackContext;

@end
