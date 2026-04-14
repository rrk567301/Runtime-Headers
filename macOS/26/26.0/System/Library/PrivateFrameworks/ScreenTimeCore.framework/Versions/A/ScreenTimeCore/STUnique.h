@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (id)historyTokenFromStore:(id)a0;
+ (BOOL)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
+ (Class)_internalClassForSerializableClassName:(id)a0;
+ (BOOL)_updateScreenTimeSettingsForAppAndWebsiteActivityEnabled:(BOOL)a0 inContext:(id)a1 error:(id *)a2;
+ (id)cloudToLocalMapping;
+ (id)localToCloudMapping;
+ (id)mirroredEntityNames;

- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (BOOL)migrateWithError:(id *)a0;
- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (id)initWithPersistenceController:(id)a0;
- (id)historyTokenFromStore:(id)a0;
- (BOOL)migrateWithExportNeeded:(BOOL *)a0 error:(id *)a1;
- (BOOL)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
- (BOOL)areLocalChangesInterestingWithError:(id *)a0;
- (void).cxx_destruct;

@end
