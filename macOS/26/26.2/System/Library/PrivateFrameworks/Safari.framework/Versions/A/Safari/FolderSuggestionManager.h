@class NSArray;

@interface FolderSuggestionManager : NSObject {
    void /* unknown type, empty encoding */ _readingListFolder;
}

@property (class, nonatomic, readonly) FolderSuggestionManager *sharedManager;

@property (nonatomic, readonly) double lastSelectedFolderValidityPeriod;
@property (nonatomic, readonly) NSArray *defaultSuggestions;

- (void).cxx_destruct;
- (id)init;
- (void)fetchReadingListFolder;

@end
