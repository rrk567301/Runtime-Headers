@class NSArray, NSData;

@interface JRSchemaJRModelDiagnosticsSignals : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *modelDiagnosticSignals;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addModelDiagnosticSignals:(float)a0;
- (void)clearModelDiagnosticSignals;
- (void)deleteModelDiagnosticSignals;
- (float)modelDiagnosticSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelDiagnosticSignalsCount;

@end
