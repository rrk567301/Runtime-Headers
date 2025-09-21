@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (Class)_internalClassForSerializableClassName:(id)a0;
+ (char)_updateScreenTimeSettingsForAppAndWebsiteActivityEnabled:(char)a0 inContext:(id)a1 error:(id *)a2;
+ (char)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
+ (id)cloudToLocalMapping;
+ (id)historyTokenFromStore:(id)a0;
+ (id)localToCloudMapping;
+ (id)mirroredEntityNames;

- (void).cxx_destruct;
- (char)migrateWithError:(id *)a0;
- (char)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
- (char)areLocalChangesInterestingWithError:(id *)a0;
- (id)historyTokenFromStore:(id)a0;
- (id)initWithPersistenceController:(id)a0;
- (char)migrateWithExportNeeded:(char *)a0 error:(id *)a1;
- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;

@end
