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
- (void)addOdsampleIds:(id)a0;
- (void)clearOdsampleIds;
- (void)deleteCollectionStatus;
- (void)deleteOdsampleIds;
- (void)deleteUserSamplingId;
- (id)odsampleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)odsampleIdsCount;

@end
