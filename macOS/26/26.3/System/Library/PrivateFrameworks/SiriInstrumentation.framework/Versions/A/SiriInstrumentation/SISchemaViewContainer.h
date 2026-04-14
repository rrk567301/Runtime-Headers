@class NSString, NSData;

@interface SISchemaViewContainer : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) BOOL hasViewID;
@property (copy, nonatomic) NSString *snippetClass;
@property (nonatomic) BOOL hasSnippetClass;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) BOOL hasDialogIdentifier;
@property (copy, nonatomic) NSString *dialogPhase;
@property (nonatomic) BOOL hasDialogPhase;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDialogIdentifier;
- (void)deleteDialogPhase;
- (void)deleteSnippetClass;
- (void)deleteViewID;

@end
