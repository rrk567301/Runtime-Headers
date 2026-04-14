@class SFPerformEntityQueryCommand, NSArray, NSString;

@interface SPSearchFolderEntity : SPSearchEntity

@property (readonly, nonatomic) SFPerformEntityQueryCommand *command;
@property (readonly) NSArray *folderURLs;
@property (readonly) NSArray *resolvedFolderScopes;
@property (readonly) NSString *resolvedSearchString;
@property (readonly) NSString *entityIdentifier;

- (id)enabledDomains;
- (void).cxx_destruct;
- (void)setSearchString:(id)a0;
- (id)currentSearchString;
- (BOOL)shouldAllowMoreResults;
- (id)folderScopes;
- (BOOL)isFolderSearch;
- (id)spotlightFilterQueries;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (void)decomposeSearchString:(id)a0;

@end
