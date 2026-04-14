@class NSArray, NSData;

@interface JRSchemaJRModelDiagnosticsSignals : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *modelDiagnosticSignals;
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
- (void)addModelDiagnosticSignals:(float)a0;
- (void)clearModelDiagnosticSignals;
- (void)deleteModelDiagnosticSignals;
- (float)modelDiagnosticSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelDiagnosticSignalsCount;

@end
