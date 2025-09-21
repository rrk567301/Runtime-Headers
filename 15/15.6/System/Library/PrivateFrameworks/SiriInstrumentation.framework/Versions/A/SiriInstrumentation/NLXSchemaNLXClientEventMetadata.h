@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaNLXClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char componentInvocationSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *nlId;
@property (nonatomic) char hasNlId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (nonatomic) int componentInvocationSource;
@property (nonatomic) char hasComponentInvocationSource;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) char hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
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
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteComponentInvocationSource;
- (void)deleteNlId;
- (void)deleteResultCandidateId;
- (void)deleteSubRequestId;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
