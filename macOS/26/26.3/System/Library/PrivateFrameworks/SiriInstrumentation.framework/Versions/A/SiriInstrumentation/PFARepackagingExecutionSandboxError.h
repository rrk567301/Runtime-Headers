@class NSData;

@interface PFARepackagingExecutionSandboxError : SISchemaInstrumentationMessage {
    struct { unsigned char errorNumber : 1; } _has;
}

@property (nonatomic) int errorNumber;
@property (nonatomic) BOOL hasErrorNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteErrorNumber;

@end
