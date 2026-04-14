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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidenceScore;
- (void)deleteLoggableSharedUserId;
- (void)deleteUserEphemeralId;

@end
