@class INFERENCESchemaINFERENCEDisambiguationPromptContext, NSData, INFERENCESchemaINFERENCEConfirmationPromptContext;

@interface INFERENCESchemaINFERENCEPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char tag : 1; } _has;
}

@property (nonatomic) int tag;
@property (nonatomic) BOOL hasTag;
@property (retain, nonatomic) INFERENCESchemaINFERENCEConfirmationPromptContext *confirmationPromptContext;
@property (nonatomic) BOOL hasConfirmationPromptContext;
@property (retain, nonatomic) INFERENCESchemaINFERENCEDisambiguationPromptContext *disambiguationPromptContext;
@property (nonatomic) BOOL hasDisambiguationPromptContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPromptcontext;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmationPromptContext;
- (void)deleteDisambiguationPromptContext;
- (void)deleteTag;

@end
