@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *mutableCorruptRecords;
@property (readonly, nonatomic) NSArray *corruptRecords;

+ (id)nameForState:(unsigned long long)a0;

- (id)activityCreate;
- (BOOL)makeStateTransition;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)_checkRecordPCSForAllZones;
- (void)_fetchZones;

@end
