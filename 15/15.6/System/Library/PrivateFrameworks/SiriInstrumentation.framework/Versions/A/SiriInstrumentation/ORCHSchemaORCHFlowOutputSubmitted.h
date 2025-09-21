@class NSArray, NSData, SISchemaUUID;

@interface ORCHSchemaORCHFlowOutputSubmitted : SISchemaInstrumentationMessage {
    struct { unsigned char flowOutputSubmissionId : 1; unsigned char flowCommandReceived : 1; unsigned char flowCommandResponseError : 1; } _has;
}

@property (nonatomic) int flowOutputSubmissionId;
@property (nonatomic) char hasFlowOutputSubmissionId;
@property (nonatomic) char flowCommandReceived;
@property (nonatomic) char hasFlowCommandReceived;
@property (nonatomic) char flowCommandResponseError;
@property (nonatomic) char hasFlowCommandResponseError;
@property (retain, nonatomic) SISchemaUUID *aceCommandId;
@property (nonatomic) char hasAceCommandId;
@property (copy, nonatomic) NSArray *aceViewIds;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)aceViewIdsCount;
- (void)clearAceViewIds;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)aceViewIdsAtIndex:(unsigned long long)a0;
- (void)addAceViewIds:(id)a0;
- (void)deleteAceCommandId;
- (void)deleteAceViewIds;
- (void)deleteFlowCommandReceived;
- (void)deleteFlowCommandResponseError;
- (void)deleteFlowOutputSubmissionId;
- (void)deleteSubRequestId;
- (id)suppressMessageUnderConditions;

@end
