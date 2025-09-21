@class NSArray, FLOWSchemaFLOWPlatformContext, FLOWSchemaFLOWState, NSData, FLOWSchemaFLOWAppContext;

@interface FLOWSchemaFLOWStep : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNum : 1; unsigned char timestampMs : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNum;
@property (nonatomic) char hasSequenceNum;
@property (nonatomic) long long timestampMs;
@property (nonatomic) char hasTimestampMs;
@property (retain, nonatomic) FLOWSchemaFLOWState *flowState;
@property (nonatomic) char hasFlowState;
@property (retain, nonatomic) FLOWSchemaFLOWAppContext *appContext;
@property (nonatomic) char hasAppContext;
@property (copy, nonatomic) NSArray *domainContexts;
@property (copy, nonatomic) NSArray *platformContexts;
@property (retain, nonatomic) FLOWSchemaFLOWPlatformContext *platformRelatedContext;
@property (nonatomic) char hasPlatformRelatedContext;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFlowState;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addDomainContext:(id)a0;
- (void)addPlatformContext:(id)a0;
- (void)clearDomainContext;
- (void)clearPlatformContext;
- (void)deleteAppContext;
- (void)deleteDomainContext;
- (void)deletePlatformContext;
- (void)deletePlatformRelatedContext;
- (void)deleteSequenceNum;
- (void)deleteTimestampMs;
- (id)domainContextAtIndex:(unsigned long long)a0;
- (unsigned long long)domainContextCount;
- (id)platformContextAtIndex:(unsigned long long)a0;
- (unsigned long long)platformContextCount;
- (id)suppressMessageUnderConditions;

@end
