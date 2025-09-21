@class SFPerformEntityQueryCommand, NSArray, NSString;

@interface SPSearchFolderEntity : SPSearchEntity

@property (readonly, nonatomic) SFPerformEntityQueryCommand *command;
@property (readonly) NSArray *folderURLs;
@property (readonly) NSArray *resolvedFolderScopes;
@property (readonly) NSString *resolvedSearchString;
@property (readonly) NSString *entityIdentifier;

- (id)currentSearchString;
- (BOOL)shouldAllowMoreResults;
- (id)enabledDomains;
- (void)setSearchString:(id)a0;
- (void).cxx_destruct;
- (id)folderScopes;
- (BOOL)isFolderSearch;
- (id)spotlightFilterQueries;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (void)decomposeSearchString:(id)a0;

@end
