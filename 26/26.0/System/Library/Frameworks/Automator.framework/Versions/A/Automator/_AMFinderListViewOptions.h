@class _AMFinderColumn;

@interface _AMFinderListViewOptions : SBObject

@property BOOL calculatesFolderSizes;
@property BOOL showsIconPreview;
@property int iconSize;
@property long long textSize;
@property (copy) _AMFinderColumn *sortColumn;
@property BOOL usesRelativeDates;

- (id)columns;
- (BOOL)exists;
- (void)erase;
- (void)select;
- (void)activate;
- (void)close;
- (id)delete;
- (void)eject;
- (long long)dataSizeAs:(id)a0;
- (id)duplicateTo:(id)a0 replacing:(BOOL)a1 routingSuppressed:(BOOL)a2;
- (void)emptySecurity:(BOOL)a0;
- (id)moveTo:(id)a0 replacing:(BOOL)a1 positionedAt:(id)a2 routingSuppressed:(BOOL)a3;
- (void)openUsing:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0;
- (void)reveal;
- (void)updateNecessity:(BOOL)a0 registeringApplications:(BOOL)a1;

@end
