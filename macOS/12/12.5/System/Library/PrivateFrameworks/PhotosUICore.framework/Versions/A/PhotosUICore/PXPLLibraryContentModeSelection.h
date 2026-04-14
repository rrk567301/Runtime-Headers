@interface PXPLLibraryContentModeSelection : NSObject

+ (BOOL)hasPersistedLibraryContentModeSelection;
+ (void)setPersistedLibraryContentModeSelection:(int)a0;
+ (int)getPersistedLibraryContentModeSelection;
+ (int)contentModeForNavigationDestination:(id)a0;

@end
