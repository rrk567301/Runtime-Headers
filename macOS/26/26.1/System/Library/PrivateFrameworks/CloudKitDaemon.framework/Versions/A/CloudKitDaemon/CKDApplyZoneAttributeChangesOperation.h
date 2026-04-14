@class CKRecordZone;

@interface CKDApplyZoneAttributeChangesOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKRecordZone *zone;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long pcsKeysRemoved;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (id)relevantZoneIDs;
- (void).cxx_destruct;
- (void)decryptPCSs;
- (void)removePCSKeys;
- (void)savePCSChanges;
- (void)updatePCSCache;

@end
