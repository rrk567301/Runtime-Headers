@interface CalSyncClearifier : NSObject

+ (void)_syncToClearRecordsForEntitiesInDataClass:(id)a0 client:(id)a1;
+ (void)unregisterClients;
+ (BOOL)clearRecordsForEntitiesInDataClass:(id)a0;
+ (BOOL)clearRecords;

- (id)init;

@end
