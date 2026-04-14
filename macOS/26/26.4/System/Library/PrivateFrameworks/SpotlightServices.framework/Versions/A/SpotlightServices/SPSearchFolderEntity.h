@class SFPerformEntityQueryCommand, NSString, NSArray;

@interface SPSearchFolderEntity : SPSearchEntity

@property (readonly, nonatomic) SFPerformEntityQueryCommand *command;
@property (retain) NSString *resolvedSearchString;
@property (readonly) NSArray *folderURLs;
@property (readonly) NSArray *resolvedFolderScopes;
@property (readonly) NSString *entityIdentifier;

- (BOOL)shouldAllowMoreResults;
- (void)setSearchString:(id)a0;
- (id)enabledDomains;
- (void).cxx_destruct;
- (id)currentSearchString;
- (id)folderScopes;
- (BOOL)isFolderSearch;
- (id)spotlightFilterQueries;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (void)decomposeSearchString:(id)a0;

@end
