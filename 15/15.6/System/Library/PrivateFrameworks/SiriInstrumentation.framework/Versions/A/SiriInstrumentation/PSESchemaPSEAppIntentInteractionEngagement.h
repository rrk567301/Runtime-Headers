@class NSString, NSData;

@interface PSESchemaPSEAppIntentInteractionEngagement : SISchemaInstrumentationMessage {
    struct { unsigned char followUpActionType : 1; unsigned char followUpEntityComparison : 1; unsigned char isSiriResultUseful : 1; unsigned char isFirstPartyApp : 1; } _has;
}

@property (copy, nonatomic) NSString *appIntentName;
@property (nonatomic) char hasAppIntentName;
@property (nonatomic) int followUpActionType;
@property (nonatomic) char hasFollowUpActionType;
@property (nonatomic) int followUpEntityComparison;
@property (nonatomic) char hasFollowUpEntityComparison;
@property (nonatomic) char isSiriResultUseful;
@property (nonatomic) char hasIsSiriResultUseful;
@property (nonatomic) char isFirstPartyApp;
@property (nonatomic) char hasIsFirstPartyApp;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppIntentName;
- (void)deleteFollowUpActionType;
- (void)deleteFollowUpEntityComparison;
- (void)deleteIsFirstPartyApp;
- (void)deleteIsSiriResultUseful;
- (id)suppressMessageUnderConditions;

@end
