@class NSData;

@interface IFTSchemaIFTActionParameterValue : SISchemaInstrumentationMessage

@property (nonatomic) char confirmed;
@property (nonatomic) char hasConfirmed;
@property (nonatomic) long long selectedInDisambiguation;
@property (nonatomic) char hasSelectedInDisambiguation;
@property (nonatomic) char denied;
@property (nonatomic) char hasDenied;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Promptselection;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmed;
- (void)deleteDenied;
- (void)deleteSelectedInDisambiguation;
- (id)suppressMessageUnderConditions;

@end
