@class NSArray, NSData;

@interface JRSchemaJRModelDiagnosticsSignals : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *modelDiagnosticSignals;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addModelDiagnosticSignals:(float)a0;
- (void)clearModelDiagnosticSignals;
- (void)deleteModelDiagnosticSignals;
- (float)modelDiagnosticSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelDiagnosticSignalsCount;

@end
