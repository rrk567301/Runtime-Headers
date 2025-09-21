@interface VoiceShortcuts.VCCKLibrarySyncCoordinator : NSObject

+ (char)handleFetchedLibraryRecord:(id)a0 database:(id)a1 logger:(id)a2 error:(id *)a3;
+ (char)handleSavedLibraryRecord:(id)a0 database:(id)a1 error:(id *)a2;
+ (char)handleServerRecordChangedErrorForRecord:(id)a0 database:(id)a1 logger:(id)a2 error:(id *)a3;
+ (char)handleUnknownItemErrorForRecord:(id)a0 database:(id)a1 error:(id *)a2;

- (id)init;

@end
