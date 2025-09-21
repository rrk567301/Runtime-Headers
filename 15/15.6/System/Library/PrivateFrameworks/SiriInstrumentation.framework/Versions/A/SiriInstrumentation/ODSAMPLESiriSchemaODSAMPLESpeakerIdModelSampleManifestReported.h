@class NSArray, NSData, SISchemaUUID;

@interface ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported : SISchemaInstrumentationMessage {
    struct { unsigned char collectionStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *userSamplingId;
@property (nonatomic) char hasUserSamplingId;
@property (copy, nonatomic) NSArray *odsampleIds;
@property (nonatomic) int collectionStatus;
@property (nonatomic) char hasCollectionStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addOdsampleIds:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearOdsampleIds;
- (void)deleteCollectionStatus;
- (void)deleteOdsampleIds;
- (void)deleteUserSamplingId;
- (id)odsampleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)odsampleIdsCount;
- (id)suppressMessageUnderConditions;

@end
