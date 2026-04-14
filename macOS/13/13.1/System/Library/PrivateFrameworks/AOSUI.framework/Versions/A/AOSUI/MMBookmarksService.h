@class NSString;

@interface MMBookmarksService : MMService <MMServiceDataclassActionPerforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (void)showMoreInfo:(id)a0;
- (void)_updateUI;
- (void)performDataclassActionsForService:(id)a0 willEnable:(BOOL)a1 shouldCreate:(BOOL)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (BOOL)isDataService;
- (BOOL)hasDataToMerge;
- (void)didSelect;
- (BOOL)_shouldEnable:(BOOL)a0;
- (BOOL)_applicationExists;
- (void)showMergeConflictSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
