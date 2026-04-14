@class NSData;

@interface PFAPreprocessorExecutionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char executionTimeInNs : 1; unsigned char stagedMessageCount : 1; unsigned char processedMessageCount : 1; } _has;
}

@property (nonatomic) unsigned long long executionTimeInNs;
@property (nonatomic) BOOL hasExecutionTimeInNs;
@property (nonatomic) unsigned int stagedMessageCount;
@property (nonatomic) BOOL hasStagedMessageCount;
@property (nonatomic) unsigned int processedMessageCount;
@property (nonatomic) BOOL hasProcessedMessageCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteExecutionTimeInNs;
- (void)deleteProcessedMessageCount;
- (void)deleteStagedMessageCount;

@end
