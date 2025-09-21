@class NSData, FLOWSchemaFLOWDomainExecutionMetadata;

@interface FLOWSchemaFLOWDomainExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char domainExecutionType : 1; } _has;
}

@property (nonatomic) int domainExecutionType;
@property (nonatomic) char hasDomainExecutionType;
@property (retain, nonatomic) FLOWSchemaFLOWDomainExecutionMetadata *domainExecutionMetadata;
@property (nonatomic) char hasDomainExecutionMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDomainExecutionMetadata;
- (void)deleteDomainExecutionType;
- (id)suppressMessageUnderConditions;

@end
