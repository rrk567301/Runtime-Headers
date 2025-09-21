@class NSString, NSData;

@interface INFERENCESchemaINFERENCEConfirmationPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char resolution : 1; } _has;
}

@property (copy, nonatomic) NSString *anonymizedEntityPresented;
@property (nonatomic) char hasAnonymizedEntityPresented;
@property (nonatomic) int resolution;
@property (nonatomic) char hasResolution;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnonymizedEntityPresented;
- (void)deleteResolution;
- (id)suppressMessageUnderConditions;

@end
