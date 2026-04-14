@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (BOOL)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
+ (id)historyTokenFromStore:(id)a0;
+ (Class)_internalClassForSerializableClassName:(id)a0;
+ (BOOL)_updateScreenTimeSettingsForAppAndWebsiteActivityEnabled:(BOOL)a0 inContext:(id)a1 error:(id *)a2;
+ (id)cloudToLocalMapping;
+ (id)localToCloudMapping;
+ (id)mirroredEntityNames;

- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (id)initWithPersistenceController:(id)a0;
- (BOOL)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
- (BOOL)areLocalChangesInterestingWithError:(id *)a0;
- (BOOL)migrateWithError:(id *)a0;
- (void).cxx_destruct;
- (id)historyTokenFromStore:(id)a0;
- (BOOL)migrateWithExportNeeded:(BOOL *)a0 error:(id *)a1;

@end
