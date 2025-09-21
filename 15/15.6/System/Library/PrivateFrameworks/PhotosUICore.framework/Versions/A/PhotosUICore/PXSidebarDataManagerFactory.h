@interface PXSidebarDataManagerFactory : NSObject

+ (id)makeBookmarksDataSectionManagerWithLibrary:(id)a0;
+ (id)makeMediaTypesDataSectionManagerWithLibrary:(id)a0;
+ (id)makeUtilitiesDataSectionManagerWithLibrary:(id)a0 forPicker:(char)a1;

- (id)init;

@end
