@class NSArray, NSData, SISchemaUUID;

@interface ORCHSchemaORCHFlowOutputSubmitted : SISchemaInstrumentationMessage {
    struct { unsigned char flowOutputSubmissionId : 1; unsigned char flowCommandReceived : 1; unsigned char flowCommandResponseError : 1; } _has;
}

@property (nonatomic) int flowOutputSubmissionId;
@property (nonatomic) BOOL hasFlowOutputSubmissionId;
@property (nonatomic) BOOL flowCommandReceived;
@property (nonatomic) BOOL hasFlowCommandReceived;
@property (nonatomic) BOOL flowCommandResponseError;
@property (nonatomic) BOOL hasFlowCommandResponseError;
@property (retain, nonatomic) SISchemaUUID *aceCommandId;
@property (nonatomic) BOOL hasAceCommandId;
@property (copy, nonatomic) NSArray *aceViewIds;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
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
- (unsigned long long)aceViewIdsCount;
- (void)clearAceViewIds;
- (id)aceViewIdsAtIndex:(unsigned long long)a0;
- (void)addAceViewIds:(id)a0;
- (void)deleteAceCommandId;
- (void)deleteAceViewIds;
- (void)deleteFlowCommandReceived;
- (void)deleteFlowCommandResponseError;
- (void)deleteFlowOutputSubmissionId;
- (void)deleteSubRequestId;

@end
