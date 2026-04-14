@class NSString, NSData, SISchemaUUID;

@interface IDENTITYSchemaIDENTITYScoreTuple : SISchemaInstrumentationMessage {
    struct { unsigned char confidenceScore : 1; } _has;
}

@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) BOOL hasUserEphemeralId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteConfidenceScore;
- (void)deleteLoggableSharedUserId;
- (void)deleteUserEphemeralId;

@end
