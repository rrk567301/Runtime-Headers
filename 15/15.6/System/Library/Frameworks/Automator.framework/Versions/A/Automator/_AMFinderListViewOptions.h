@class _AMFinderColumn;

@interface _AMFinderListViewOptions : SBObject

@property char calculatesFolderSizes;
@property char showsIconPreview;
@property int iconSize;
@property long long textSize;
@property (copy) _AMFinderColumn *sortColumn;
@property char usesRelativeDates;

- (void)close;
- (void)select;
- (void)activate;
- (id)columns;
- (id)delete;
- (void)eject;
- (char)exists;
- (void)erase;
- (long long)dataSizeAs:(id)a0;
- (id)duplicateTo:(id)a0 replacing:(char)a1 routingSuppressed:(char)a2;
- (void)emptySecurity:(char)a0;
- (id)moveTo:(id)a0 replacing:(char)a1 positionedAt:(id)a2 routingSuppressed:(char)a3;
- (void)openUsing:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0;
- (void)reveal;
- (void)updateNecessity:(char)a0 registeringApplications:(char)a1;

@end
