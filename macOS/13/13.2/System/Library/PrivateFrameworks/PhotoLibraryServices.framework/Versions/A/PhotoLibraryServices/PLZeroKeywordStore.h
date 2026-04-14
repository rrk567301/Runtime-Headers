@class NSString;

@interface PLZeroKeywordStore : NSObject {
    NSString *_storePath;
}

+ (id)expectedClasses;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)deleteStore;
- (id)currentZeroKeywords;
- (id)currentZeroKeywordsForLibraryScope:(long long)a0;
- (void)updateZeroKeywordsTo:(id)a0;

@end
