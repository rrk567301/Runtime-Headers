@class NSData;

@interface IFTSchemaIFTActionParameterValue : SISchemaInstrumentationMessage

@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL hasConfirmed;
@property (nonatomic) long long selectedInDisambiguation;
@property (nonatomic) BOOL hasSelectedInDisambiguation;
@property (nonatomic) BOOL denied;
@property (nonatomic) BOOL hasDenied;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Promptselection;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteConfirmed;
- (void)deleteDenied;
- (void)deleteSelectedInDisambiguation;

@end
