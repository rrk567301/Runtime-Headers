@class NSString;

@interface SCRTextSearchData : SCRSearchData

@property (readonly, nonatomic) NSString *searchText;

+ (id /* block */)_textPredicate;

- (void).cxx_destruct;
- (id)defaultRemoteSearchOnElement:(id)a0;
- (BOOL)resultWebTextField:(id)a0 doesMatchSearchCriteriaInMarker:(id)a1;
- (BOOL)shouldUseiOSSearch;
- (BOOL)shouldUseCustomRemoteSearch;
- (id)initWithStartElement:(id)a0 direction:(long long)a1 request:(id)a2 searchText:(id)a3;
- (BOOL)_doesMarkerContainSearchText:(id)a0 searchPosition:(long long)a1;

@end
