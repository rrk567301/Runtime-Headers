@class NSArray, NSData;

@interface RFSchemaRFGradingDialogReportedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dialogLines;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)addDialogLines:(id)a0;
- (void)clearDialogLines;
- (void)deleteDialogLines;
- (id)dialogLinesAtIndex:(unsigned long long)a0;
- (unsigned long long)dialogLinesCount;

@end
