@interface PXSidebarDataManagerFactory : NSObject

+ (id)makeMediaTypesDataSectionManagerWithLibrary:(id)a0 topLevelIdentifier:(id)a1;
+ (id)makeBookmarksDataSectionManagerWithLibrary:(id)a0 topLevelIdentifier:(id)a1;
+ (id)makeUtilitiesDataSectionManagerWithLibrary:(id)a0 topLevelIdentifier:(id)a1 forPicker:(BOOL)a2 excludeHiddenAlbum:(BOOL)a3;

- (id)init;

@end
