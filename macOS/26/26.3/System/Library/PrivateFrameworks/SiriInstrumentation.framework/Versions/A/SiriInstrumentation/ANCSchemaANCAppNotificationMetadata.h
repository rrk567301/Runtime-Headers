@class NSData;

@interface ANCSchemaANCAppNotificationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char commsNotificationType : 1; unsigned char isSmsEligible : 1; unsigned char isAskWithSiriEnabled : 1; } _has;
}

@property (nonatomic) int commsNotificationType;
@property (nonatomic) BOOL hasCommsNotificationType;
@property (nonatomic) BOOL isSmsEligible;
@property (nonatomic) BOOL hasIsSmsEligible;
@property (nonatomic) BOOL isAskWithSiriEnabled;
@property (nonatomic) BOOL hasIsAskWithSiriEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCommsNotificationType;
- (void)deleteIsAskWithSiriEnabled;
- (void)deleteIsSmsEligible;

@end
