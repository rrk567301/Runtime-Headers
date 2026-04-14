@interface SDMetadataDiagnosticClient : SDDiagnosticClient

- (id)init;
- (void)issueDiagnose:(int)a0 privacyLevel:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
