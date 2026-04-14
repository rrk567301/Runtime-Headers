@class NSString;

@interface MMBookmarksService : MMService <MMServiceDataclassActionPerforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (void)showMoreInfo:(id)a0;
- (void)_updateUI;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (void)performDataclassActionsForService:(id)a0 willEnable:(BOOL)a1 shouldCreate:(BOOL)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)hasDataToMerge;
- (BOOL)isDataService;
- (void)didSelect;
- (BOOL)_applicationExists;
- (BOOL)_shouldEnable:(BOOL)a0;
- (void)showMergeConflictSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
