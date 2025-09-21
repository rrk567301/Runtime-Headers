@class SCRCIndexMap;

@interface SCRAttributeSearchData : SCRSearchData

@property (retain, nonatomic) SCRCIndexMap *resultAttributes;
@property (nonatomic) unsigned long long resultMask;
@property (readonly, nonatomic) long long searchAttribute;

+ (id /* block */)_attributePredicate;

- (void).cxx_destruct;
- (char)compareSearchAttributeDataForMarker:(id)a0 element:(id)a1;
- (id)defaultRemoteSearchOnElement:(id)a0;
- (char)hasSameTextAttributes:(id)a0;
- (id)initWithStartElement:(id)a0 direction:(long long)a1 request:(id)a2 searchAttribute:(long long)a3;
- (char)isSameColor:(id)a0;
- (char)isSameFont:(id)a0;
- (char)resultWebTextField:(id)a0 doesMatchSearchCriteriaInMarker:(id)a1;
- (char)shouldUseCustomRemoteSearch;
- (char)validateSearchResultMarker:(id)a0;

@end
