@class NSString;

@interface PRSDictionaryResult : SFSearchResult_SpotlightExtras

@property (retain) NSString *dictionaryId;
@property (retain) NSString *definitionId;
@property (retain) NSString *query;

- (id)URL;
- (id)category;
- (id)groupName;
- (int)type;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (id)initWithDisplayName:(id)a0 definitionId:(id)a1 dictionaryId:(id)a2 query:(id)a3;
- (BOOL)isLocalResult;
- (id)pathForApplicationToOpen;
- (unsigned long long)resultOpenOptions;

@end
