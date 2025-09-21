@interface ICNoteListSortUtilities : NSObject

+ (void)clearCache;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(char)a0;
+ (long long)currentNoteListSortType;
+ (id)legacySortDescriptorsForType:(long long)a0;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(char)a0 folderNoteSortType:(id)a1;
+ (id)sortDescriptorsForType:(long long)a0;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:(id)a0 folderNoteSortType:(id)a1;
+ (id)descriptionForNoteListSortType:(long long)a0;
+ (long long)sortTypeForTag:(long long)a0;
+ (long long)tagForSortType:(long long)a0;
+ (id)dateForCurrentSortTypeForNote:(id)a0 folderNoteSortType:(id)a1;
+ (long long)folderSortOrderForNoteListSortType:(long long)a0;
+ (char)isMenuItemCurrentSortTypeForTag:(long long)a0;
+ (id)legacySortDescriptorsForType:(long long)a0 ascending:(char)a1;
+ (void)setCurrentNoteListSortType:(long long)a0;
+ (void)setCurrentNoteListSortTypeByTag:(long long)a0;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForType:(long long)a0 ascending:(char)a1;
+ (long long)sortTypeForFolderNoteOrder:(long long)a0;
+ (long long)sortTypeFromLegacyDefaultString:(id)a0;
+ (void)upgradeLegacySortTypeToNewSortTypeIfNecessary;

@end
