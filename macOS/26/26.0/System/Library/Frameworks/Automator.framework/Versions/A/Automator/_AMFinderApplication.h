@class _AMFinderComputerObject, NSString, _AMFinderPreferences, _AMFinderTrashObject, _AMFinderDisk, _AMFinderFolder, _AMFinderFile, SBObject, _AMFinderDesktopObject;

@interface _AMFinderApplication : SBApplication

@property (copy) _AMFinderFile *desktopPicture;
@property (readonly, copy) SBObject *clipboard;
@property (readonly, copy) NSString *name;
@property BOOL visible;
@property BOOL frontmost;
@property (copy) SBObject *selection;
@property (readonly, copy) SBObject *insertionLocation;
@property (readonly, copy) NSString *productVersion;
@property (readonly, copy) NSString *version;
@property (readonly, copy) _AMFinderDisk *startupDisk;
@property (readonly, copy) _AMFinderDesktopObject *desktop;
@property (readonly, copy) _AMFinderTrashObject *trash;
@property (readonly, copy) _AMFinderFolder *home;
@property (readonly, copy) _AMFinderComputerObject *computerContainer;
@property (readonly, copy) _AMFinderPreferences *FinderPreferences;

+ (id)application;

- (void)shutDown;
- (id)items;
- (id)codesForPropertyNames;
- (void)restart;
- (id)containers;
- (void)quit;
- (void)activate;
- (id)classNamesForCodes;
- (id)windows;
- (id)packages;
- (id)files;
- (id)disks;
- (void)eject;
- (id)folders;
- (void)sleep;
- (id)FinderWindows;
- (id)clippingWindows;
- (id)aliasFiles;
- (id)applicationFiles;
- (id)clippings;
- (id)documentFiles;
- (void)emptySecurity:(BOOL)a0;
- (id)internetLocationFiles;

@end
