@class NSData, SISchemaUUID;

@interface MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char approximateSessionTimeStamp : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) unsigned long long approximateSessionTimeStamp;
@property (nonatomic) BOOL hasApproximateSessionTimeStamp;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteRequestId;
- (void)deleteApproximateSessionTimeStamp;
- (void)deleteClockIdentifier;

@end
