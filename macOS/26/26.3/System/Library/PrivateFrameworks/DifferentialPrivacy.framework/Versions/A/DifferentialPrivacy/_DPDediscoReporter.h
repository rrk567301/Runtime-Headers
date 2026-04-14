@interface _DPDediscoReporter : _DPReportGenerator

+ (id)filterNonConformingDediscoRecordsFrom:(id)a0;

- (void)reportCoreAnalyticsExecutionStage:(unsigned long long)a0 error:(id)a1 key:(id)a2 count:(unsigned long long)a3;
- (BOOL)reportDediscoRecords:(id)a0;
- (BOOL)markSubmitted:(id)a0 storage:(id)a1;
- (id)directlyUploadDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (id)reportToDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (id)removeExpiredRecords:(id)a0 forKey:(id)a1 storage:(id)a2;
- (BOOL)reportDediscoKeys:(id)a0 storage:(id)a1;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
