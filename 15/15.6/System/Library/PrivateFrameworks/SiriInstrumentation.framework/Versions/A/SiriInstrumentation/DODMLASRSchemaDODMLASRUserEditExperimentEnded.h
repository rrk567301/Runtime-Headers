@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numAudioFilesAvailable : 1; unsigned char numAudioFilesSelected : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSArray *redecodingResults;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) unsigned int numAudioFilesAvailable;
@property (nonatomic) char hasNumAudioFilesAvailable;
@property (nonatomic) unsigned int numAudioFilesSelected;
@property (nonatomic) char hasNumAudioFilesSelected;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addRedecodingResults:(id)a0;
- (void)clearRedecodingResults;
- (void)deleteLinkId;
- (void)deleteNumAudioFilesAvailable;
- (void)deleteNumAudioFilesSelected;
- (void)deleteRedecodingResults;
- (id)redecodingResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)redecodingResultsCount;
- (id)suppressMessageUnderConditions;

@end
