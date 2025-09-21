@class NSArray, NSData, SISchemaUUID;

@interface ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported : SISchemaInstrumentationMessage {
    struct { unsigned char collectionStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *userSamplingId;
@property (nonatomic) BOOL hasUserSamplingId;
@property (copy, nonatomic) NSArray *odsampleIds;
@property (nonatomic) int collectionStatus;
@property (nonatomic) BOOL hasCollectionStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addOdsampleIds:(id)a0;
- (void)clearOdsampleIds;
- (void)deleteCollectionStatus;
- (void)deleteOdsampleIds;
- (void)deleteUserSamplingId;
- (id)odsampleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)odsampleIdsCount;

@end
