@class NSString, NSData;

@interface INFERENCESchemaINFERENCEConfirmationPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char resolution : 1; } _has;
}

@property (copy, nonatomic) NSString *anonymizedEntityPresented;
@property (nonatomic) BOOL hasAnonymizedEntityPresented;
@property (nonatomic) int resolution;
@property (nonatomic) BOOL hasResolution;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnonymizedEntityPresented;
- (void)deleteResolution;

@end
