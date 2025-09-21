@class NSString, WFLibrary;

@interface WFShortcutsV12CustomModificationStep : NSObject <WFProgressiveMigrationCustomModificationsStep>

@property (retain, nonatomic) WFLibrary *libraryToWrite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createLibraryFromCurrentDatabaseSnapshot:(id)a0;
- (BOOL)gatherStateFromPreviousContext:(id)a0 error:(id *)a1;
- (BOOL)performModificationsWithContext:(id)a0 error:(id *)a1;
- (BOOL)shouldAddWorkflowToLibrary:(id)a0;

@end
