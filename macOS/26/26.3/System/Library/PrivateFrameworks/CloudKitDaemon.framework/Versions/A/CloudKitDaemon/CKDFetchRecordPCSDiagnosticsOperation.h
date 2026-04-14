@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *mutableCorruptRecords;
@property (readonly, nonatomic) NSArray *corruptRecords;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_checkRecordPCSForAllZones;
- (void)_fetchZones;

@end
