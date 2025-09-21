@class INFERENCESchemaINFERENCEDisambiguationPromptContext, NSData, INFERENCESchemaINFERENCEConfirmationPromptContext;

@interface INFERENCESchemaINFERENCEPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char tag : 1; } _has;
}

@property (nonatomic) int tag;
@property (nonatomic) char hasTag;
@property (retain, nonatomic) INFERENCESchemaINFERENCEConfirmationPromptContext *confirmationPromptContext;
@property (nonatomic) char hasConfirmationPromptContext;
@property (retain, nonatomic) INFERENCESchemaINFERENCEDisambiguationPromptContext *disambiguationPromptContext;
@property (nonatomic) char hasDisambiguationPromptContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPromptcontext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmationPromptContext;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDisambiguationPromptContext;
- (void)deleteTag;
- (id)suppressMessageUnderConditions;

@end
