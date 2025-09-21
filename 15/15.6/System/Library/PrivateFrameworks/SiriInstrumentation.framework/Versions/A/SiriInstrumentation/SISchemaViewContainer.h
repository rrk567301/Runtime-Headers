@class NSString, NSData;

@interface SISchemaViewContainer : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) char hasViewID;
@property (copy, nonatomic) NSString *snippetClass;
@property (nonatomic) char hasSnippetClass;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) char hasDialogIdentifier;
@property (copy, nonatomic) NSString *dialogPhase;
@property (nonatomic) char hasDialogPhase;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogIdentifier;
- (void)deleteDialogPhase;
- (void)deleteSnippetClass;
- (void)deleteViewID;
- (id)suppressMessageUnderConditions;

@end
