@interface ICNoteListSortUtilities : NSObject

+ (void)clearCache;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0;
+ (id)sortDescriptorsForType:(long long)a0;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)a0 folderNoteSortType:(id)a1;
+ (long long)currentNoteListSortType;
+ (id)legacySortDescriptorsForType:(long long)a0;
+ (void)setCurrentNoteListSortType:(long long)a0;
+ (id)sortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (id)legacySortDescriptorsForType:(long long)a0 ascending:(BOOL)a1;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForPinnedNotes;
+ (long long)sortTypeForFolderNoteOrder:(long long)a0;
+ (id)descriptionForNoteListSortType:(long long)a0;
+ (void)setCurrentNoteListSortTypeByTag:(long long)a0;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(long long)a0;
+ (long long)sortTypeForTag:(long long)a0;
+ (long long)tagForSortType:(long long)a0;
+ (long long)folderSortOrderForNoteListSortType:(long long)a0;
+ (id)dateForCurrentSortTypeForNote:(id)a0;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:(id)a0;
+ (void)upgradeLegacySortTypeToNewSortTypeIfNecessary;
+ (long long)sortTypeFromLegacyDefaultString:(id)a0;

@end
