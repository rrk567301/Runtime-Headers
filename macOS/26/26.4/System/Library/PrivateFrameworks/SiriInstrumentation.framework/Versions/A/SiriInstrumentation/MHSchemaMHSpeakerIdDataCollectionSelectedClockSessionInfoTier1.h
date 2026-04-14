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
- (void)deleteRequestId;
- (void)deleteApproximateSessionTimeStamp;
- (void)deleteClockIdentifier;

@end
