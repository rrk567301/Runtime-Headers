@class NSData;

@interface SISchemaAnnounceNotifications : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; unsigned char proxCardSeen : 1; unsigned char replyWithoutConfirmation : 1; unsigned char carPlayStatus : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isCarPlayMuted : 1; } _has;
}

@property (nonatomic) char isEnabled;
@property (nonatomic) char hasIsEnabled;
@property (nonatomic) char proxCardSeen;
@property (nonatomic) char hasProxCardSeen;
@property (nonatomic) char replyWithoutConfirmation;
@property (nonatomic) char hasReplyWithoutConfirmation;
@property (nonatomic) int carPlayStatus;
@property (nonatomic) char hasCarPlayStatus;
@property (nonatomic) char isEnabledForHeadphones;
@property (nonatomic) char hasIsEnabledForHeadphones;
@property (nonatomic) char isCarPlayMuted;
@property (nonatomic) char hasIsCarPlayMuted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteCarPlayStatus;
- (void)deleteIsCarPlayMuted;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteProxCardSeen;
- (void)deleteReplyWithoutConfirmation;
- (id)suppressMessageUnderConditions;

@end
