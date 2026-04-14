@interface PXPLLibraryContentModeSelection : NSObject

+ (int)contentModeForNavigationDestination:(id)a0 useSearchTab:(BOOL)a1;
+ (int)getPersistedLibraryContentModeSelection;
+ (BOOL)hasPersistedLibraryContentModeSelection;
+ (void)setPersistedLibraryContentModeSelection:(int)a0;

@end
