@class NSData, ORCHSchemaORCHIFFlowError;

@interface ORCHSchemaORCHIntelligenceFlowRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char isSiriXFallback : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL isSiriXFallback;
@property (nonatomic) BOOL hasIsSiriXFallback;
@property (retain, nonatomic) ORCHSchemaORCHIFFlowError *ifflowError;
@property (nonatomic) BOOL hasIfflowError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteReason;
- (void)deleteIfflowError;
- (void)deleteIsSiriXFallback;

@end
