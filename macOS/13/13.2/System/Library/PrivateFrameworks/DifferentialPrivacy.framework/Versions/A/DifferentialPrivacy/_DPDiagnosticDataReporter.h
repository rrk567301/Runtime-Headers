@interface _DPDiagnosticDataReporter : NSObject

+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (void)clearScalarKey:(id)a0;
+ (void)setValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (void)addValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (void)clearDPKey:(id)a0 scalarKeyPrefix:(id)a1;
+ (id)diagnosticReportKeyFor:(id)a0 scalerKeyPrefix:(id)a1;
+ (id)IOTrackingPrefix;
+ (id)budgetUpdateKey;
+ (id)daReportSubmissionKey;
+ (id)parsecReportSubmissionKey;
+ (id)submittedRecordRemovalKey;
+ (id)staleRecordRemovalKey;
+ (id)staleReportFileRemovalKey;
+ (id)blacklistFileCreationKey;
+ (id)blacklistFileRemovalKey;

@end
