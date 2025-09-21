@class NSData;

@interface INFERENCESchemaINFERENCESmartEnoughAppSelectionExecutionPathReported : SISchemaInstrumentationMessage {
    struct { unsigned char executionPath : 1; unsigned char projectIntent : 1; } _has;
}

@property (nonatomic) int executionPath;
@property (nonatomic) BOOL hasExecutionPath;
@property (nonatomic) int projectIntent;
@property (nonatomic) BOOL hasProjectIntent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteExecutionPath;
- (void)deleteProjectIntent;

@end
