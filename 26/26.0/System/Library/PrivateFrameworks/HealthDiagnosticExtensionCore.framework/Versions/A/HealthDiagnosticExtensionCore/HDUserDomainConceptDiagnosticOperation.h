@interface HDUserDomainConceptDiagnosticOperation : HDDiagnosticOperation

+ (id)_udcTableColumnTitles;

- (void)run;
- (BOOL)_enumerateUDCTableInDatabase:(id)a0 appendToFormatter:(id)a1 error:(id *)a2;
- (void)_logAndAndAppendFormat:(id)a0;
- (void)_reportCountsForUDCTableRowsInDatabase:(id)a0;
- (void)_reportUDCTableInDatabase:(id)a0;
- (void)_reportUserDomainConcepts;
- (void)_reportUserDomainConceptsForDatabase:(id)a0;
- (id)reportFilename;

@end
