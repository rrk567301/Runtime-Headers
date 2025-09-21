@interface _DPDediscoReporter : _DPReportGenerator

+ (id)filterNonConformingDediscoRecordsFrom:(id)a0;

- (id)directlyUploadDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (char)markSubmitted:(id)a0 storage:(id)a1;
- (char)reportDediscoKeys:(id)a0 storage:(id)a1;
- (char)reportDediscoRecords:(id)a0;
- (id)reportToDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
