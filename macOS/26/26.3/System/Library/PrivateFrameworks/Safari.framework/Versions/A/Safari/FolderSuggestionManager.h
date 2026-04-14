@class NSArray;

@interface FolderSuggestionManager : NSObject {
    void /* unknown type, empty encoding */ _readingListFolder;
}

@property (class, nonatomic, readonly) FolderSuggestionManager *sharedManager;

@property (nonatomic, readonly) double lastSelectedFolderValidityPeriod;
@property (nonatomic, readonly) NSArray *defaultSuggestions;

- (id)init;
- (void).cxx_destruct;
- (void)fetchReadingListFolder;

@end
