@class NSArray;

@interface FolderSuggestionManager : NSObject {
    void /* unknown type, empty encoding */ currentValidBookmarkFolders;
    void /* unknown type, empty encoding */ _readingListFolder;
}

@property (class, nonatomic, readonly) FolderSuggestionManager *sharedManager;

@property (nonatomic, readonly) NSArray *suggestions;

- (id)init;
- (void).cxx_destruct;
- (void)fetchReadingListFolder;

@end
