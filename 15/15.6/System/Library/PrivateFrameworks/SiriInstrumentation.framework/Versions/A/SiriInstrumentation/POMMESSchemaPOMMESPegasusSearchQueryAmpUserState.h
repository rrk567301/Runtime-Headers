@class NSData;

@interface POMMESSchemaPOMMESPegasusSearchQueryAmpUserState : SISchemaInstrumentationMessage {
    struct { unsigned char hasAmpSubscriptionStatus : 1; unsigned char hasItunesSubscriptionStatus : 1; unsigned char hasUserToken : 1; unsigned char hasSharedUserId : 1; } _has;
}

@property (nonatomic) char hasAmpSubscriptionStatus;
@property (nonatomic) char hasHasAmpSubscriptionStatus;
@property (nonatomic) char hasItunesSubscriptionStatus;
@property (nonatomic) char hasHasItunesSubscriptionStatus;
@property (nonatomic) char hasUserToken;
@property (nonatomic) char hasHasUserToken;
@property (nonatomic) char hasSharedUserId;
@property (nonatomic) char hasHasSharedUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasAmpSubscriptionStatus;
- (void)deleteHasItunesSubscriptionStatus;
- (void)deleteHasSharedUserId;
- (void)deleteHasUserToken;
- (id)suppressMessageUnderConditions;

@end
