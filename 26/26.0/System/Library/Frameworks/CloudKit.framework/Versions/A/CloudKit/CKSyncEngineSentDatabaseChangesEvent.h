@class NSArray, NSDictionary;

@interface CKSyncEngineSentDatabaseChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *savedZones;
@property (readonly, copy, nonatomic) NSArray *failedZoneSaves;
@property (readonly, copy, nonatomic) NSArray *deletedZoneIDs;
@property (readonly, copy, nonatomic) NSDictionary *failedZoneDeletes;

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithSavedZones:(id)a0 failedZoneSaves:(id)a1 deletedZoneIDs:(id)a2 failedZoneDeletes:(id)a3;

@end
