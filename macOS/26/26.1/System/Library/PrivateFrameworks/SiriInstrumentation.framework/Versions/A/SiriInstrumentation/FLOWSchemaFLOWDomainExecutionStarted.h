@class NSData, FLOWSchemaFLOWDomainExecutionMetadata;

@interface FLOWSchemaFLOWDomainExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char domainExecutionType : 1; } _has;
}

@property (nonatomic) int domainExecutionType;
@property (nonatomic) BOOL hasDomainExecutionType;
@property (retain, nonatomic) FLOWSchemaFLOWDomainExecutionMetadata *domainExecutionMetadata;
@property (nonatomic) BOOL hasDomainExecutionMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteDomainExecutionMetadata;
- (void)deleteDomainExecutionType;

@end
