@class NSString;

@interface MMBookmarksService : MMService <MMServiceDataclassActionPerforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (void)showMoreInfo:(id)a0;
- (void)_updateUI;
- (char)_applicationExists;
- (char)_shouldEnable:(char)a0;
- (void)didSelect;
- (char)hasDataToMerge;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (char)isDataService;
- (void)performDataclassActionsForService:(id)a0 willEnable:(char)a1 shouldCreate:(char)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (void)showMergeConflictSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
