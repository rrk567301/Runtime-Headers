@interface _DPDiagnosticDataReporter : NSObject

+ (void)clearScalarKey:(id)a0;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (id)IOTrackingPrefix;
+ (id)budgetUpdateKey;
+ (void)addValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (id)blacklistFileCreationKey;
+ (id)blacklistFileRemovalKey;
+ (void)clearDPKey:(id)a0 scalarKeyPrefix:(id)a1;
+ (id)daReportSubmissionKey;
+ (id)diagnosticReportKeyFor:(id)a0 scalerKeyPrefix:(id)a1;
+ (id)parsecReportSubmissionKey;
+ (void)setValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (id)staleRecordRemovalKey;
+ (id)staleReportFileRemovalKey;
+ (id)submittedRecordRemovalKey;

@end
