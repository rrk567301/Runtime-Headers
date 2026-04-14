@class NSData;

@interface ODDSiriSchemaODDExecutionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char extensionName : 1; unsigned char executionStatus : 1; } _has;
}

@property (nonatomic) int extensionName;
@property (nonatomic) BOOL hasExtensionName;
@property (nonatomic) int executionStatus;
@property (nonatomic) BOOL hasExecutionStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteExecutionStatus;
- (void)deleteExtensionName;

@end
