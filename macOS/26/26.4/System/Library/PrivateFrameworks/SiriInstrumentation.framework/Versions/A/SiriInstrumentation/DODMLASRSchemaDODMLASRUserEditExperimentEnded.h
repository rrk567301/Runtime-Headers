@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numAudioFilesAvailable : 1; unsigned char numAudioFilesSelected : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSArray *redecodingResults;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int numAudioFilesAvailable;
@property (nonatomic) BOOL hasNumAudioFilesAvailable;
@property (nonatomic) unsigned int numAudioFilesSelected;
@property (nonatomic) BOOL hasNumAudioFilesSelected;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
- (void)deleteErrorCode;
- (void)addRedecodingResults:(id)a0;
- (void)clearRedecodingResults;
- (void)deleteLinkId;
- (void)deleteNumAudioFilesAvailable;
- (void)deleteNumAudioFilesSelected;
- (void)deleteRedecodingResults;
- (id)redecodingResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)redecodingResultsCount;

@end
