@interface MMBookmarksService : MMService

- (id)icon;
- (void)showMoreInfo:(id)a0;
- (void)_updateUI;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (BOOL)hasDataToMerge;
- (void)setEnabled:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2;
- (void)didSelect;
- (void)_completeSetEnabled:(BOOL)a0 withWindow:(id)a1;
- (void)showMergeConflictSheetForWindow:(id)a0;
- (BOOL)_applicationExists;

@end
