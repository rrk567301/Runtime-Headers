@interface HDDatabaseDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (BOOL)allowsSensitiveAttachments;
- (id)reportFilename;
- (BOOL)_captureUnprotectedDatabaseAtURL:(id)a0 protectedDatabaseAtURL:(id)a1 reason:(id)a2;
- (void)_reportMedicalIDStatistics;
- (BOOL)_reportStatisticsForUnprotectedDatabaseAtURL:(id)a0 protectedDatabaseAtURL:(id)a1;
- (void)_reportSizeForHFDAtURL:(id)a0;
- (void)_reportJournalStatisticsInSubdirectory:(id)a0 profileDirectory:(id)a1;
- (void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)a0 protectedDatabase:(id)a1;

@end
