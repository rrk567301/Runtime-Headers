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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteViewID;
- (void)deleteDialogPhase;
- (void)deleteDialogIdentifier;
- (void)deleteSnippetClass;
- (id)suppressMessageUnderConditions;

@end
