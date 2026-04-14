@interface ICNoteListSortUtilities : NSObject

+ (void)setCurrentNoteListSortTypeByTag:(long long)a0;
+ (long long)currentNoteListSortType;
+ (void)clearCache;
+ (id)sortDescriptorsForType:(long long)a0;
+ (id)sortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0 folderNoteSortType:(id)a1;
+ (id)legacySortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (long long)sortTypeForFolderNoteOrder:(long long)a0;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:(id)a0 folderNoteSortType:(id)a1;
+ (long long)folderSortOrderForNoteListSortType:(long long)a0;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(long long)a0;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0;
+ (id)sortDescriptorsForCurrentType;
+ (id)dateForCurrentSortTypeForNote:(id)a0 folderNoteSortType:(id)a1;
+ (void)upgradeLegacySortTypeToNewSortTypeIfNecessary;
+ (void)setCurrentNoteListSortType:(long long)a0;
+ (id)descriptionForNoteListSortType:(long long)a0;
+ (long long)tagForSortType:(long long)a0;
+ (id)legacySortDescriptorsForType:(long long)a0;
+ (long long)sortTypeForTag:(long long)a0;
+ (long long)sortTypeFromLegacyDefaultString:(id)a0;

@end
