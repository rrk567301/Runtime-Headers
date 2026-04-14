@class NSData, IFTSchemaIFTActionConfirmationSystemStyle;

@interface IFTSchemaIFTActionConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL hasConfirmed;
@property (nonatomic) long long selectedInDisambiguation;
@property (nonatomic) BOOL hasSelectedInDisambiguation;
@property (nonatomic) BOOL denied;
@property (nonatomic) BOOL hasDenied;
@property (retain, nonatomic) IFTSchemaIFTActionConfirmationSystemStyle *systemStyle;
@property (nonatomic) BOOL hasSystemStyle;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Promptselection;

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmed;
- (void)deleteDenied;
- (void)deleteSelectedInDisambiguation;
- (void)deleteSystemStyle;

@end
