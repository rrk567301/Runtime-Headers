@class NSData, IFTSchemaIFTActionConfirmationSystemStyle;

@interface IFTSchemaIFTActionConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) char confirmed;
@property (nonatomic) char hasConfirmed;
@property (nonatomic) long long selectedInDisambiguation;
@property (nonatomic) char hasSelectedInDisambiguation;
@property (nonatomic) char denied;
@property (nonatomic) char hasDenied;
@property (retain, nonatomic) IFTSchemaIFTActionConfirmationSystemStyle *systemStyle;
@property (nonatomic) char hasSystemStyle;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Promptselection;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmed;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDenied;
- (void)deleteExists;
- (void)deleteSelectedInDisambiguation;
- (void)deleteSystemStyle;
- (id)suppressMessageUnderConditions;

@end
