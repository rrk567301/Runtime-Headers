@class _AMFinderPreferencesWindow, _AMFinderColumnViewOptions, SBObject, _AMFinderIconViewOptions, _AMFinderListViewOptions;

@interface _AMFinderPreferences : SBObject

@property (readonly, copy) _AMFinderPreferencesWindow *window;
@property (readonly, copy) _AMFinderIconViewOptions *iconViewOptions;
@property (readonly, copy) _AMFinderListViewOptions *listViewOptions;
@property (readonly, copy) _AMFinderColumnViewOptions *columnViewOptions;
@property char foldersSpringOpen;
@property double delayBeforeSpringing;
@property char desktopShowsHardDisks;
@property char desktopShowsExternalHardDisks;
@property char desktopShowsRemovableMedia;
@property char desktopShowsConnectedServers;
@property (copy) SBObject *newWindowTarget;
@property char foldersOpenInNewWindows;
@property char newWindowsOpenInColumnView;
@property char allNameExtensionsShowing;

- (void)close;
- (void)select;
- (void)activate;
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
