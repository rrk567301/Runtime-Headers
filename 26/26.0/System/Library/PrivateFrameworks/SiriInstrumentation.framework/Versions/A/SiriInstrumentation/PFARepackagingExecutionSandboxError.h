@class NSData;

@interface PFARepackagingExecutionSandboxError : SISchemaInstrumentationMessage {
    struct { unsigned char errorNumber : 1; } _has;
}

@property (nonatomic) int errorNumber;
@property (nonatomic) BOOL hasErrorNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteErrorNumber;

@end
