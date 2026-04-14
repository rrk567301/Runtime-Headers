@class NSString, NSData;

@interface IFTSchemaIFTToolDefinition : SISchemaInstrumentationMessage {
    struct { unsigned char toolType : 1; } _has;
}

@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (nonatomic) int toolType;
@property (nonatomic) BOOL hasToolType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteToolId;
- (void)deleteToolType;

@end
