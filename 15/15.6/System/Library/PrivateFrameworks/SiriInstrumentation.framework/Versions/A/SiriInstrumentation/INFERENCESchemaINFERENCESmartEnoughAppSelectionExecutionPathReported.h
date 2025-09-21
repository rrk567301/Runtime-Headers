@class NSData;

@interface INFERENCESchemaINFERENCESmartEnoughAppSelectionExecutionPathReported : SISchemaInstrumentationMessage {
    struct { unsigned char executionPath : 1; unsigned char projectIntent : 1; } _has;
}

@property (nonatomic) int executionPath;
@property (nonatomic) char hasExecutionPath;
@property (nonatomic) int projectIntent;
@property (nonatomic) char hasProjectIntent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutionPath;
- (void)deleteProjectIntent;
- (id)suppressMessageUnderConditions;

@end
