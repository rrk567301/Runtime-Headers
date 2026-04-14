@class NSString, NSData;

@interface PSESchemaPSEAppIntentInteractionEngagement : SISchemaInstrumentationMessage {
    struct { unsigned char followUpActionType : 1; unsigned char followUpEntityComparison : 1; unsigned char isSiriResultUseful : 1; unsigned char isFirstPartyApp : 1; } _has;
}

@property (copy, nonatomic) NSString *appIntentName;
@property (nonatomic) BOOL hasAppIntentName;
@property (nonatomic) int followUpActionType;
@property (nonatomic) BOOL hasFollowUpActionType;
@property (nonatomic) int followUpEntityComparison;
@property (nonatomic) BOOL hasFollowUpEntityComparison;
@property (nonatomic) BOOL isSiriResultUseful;
@property (nonatomic) BOOL hasIsSiriResultUseful;
@property (nonatomic) BOOL isFirstPartyApp;
@property (nonatomic) BOOL hasIsFirstPartyApp;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppIntentName;
- (void)deleteFollowUpActionType;
- (void)deleteFollowUpEntityComparison;
- (void)deleteIsFirstPartyApp;
- (void)deleteIsSiriResultUseful;

@end
