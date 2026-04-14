@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaNLXClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char componentInvocationSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *nlId;
@property (nonatomic) BOOL hasNlId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int componentInvocationSource;
@property (nonatomic) BOOL hasComponentInvocationSource;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResultCandidateId;
- (void)deleteNlId;
- (void)deleteComponentInvocationSource;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
