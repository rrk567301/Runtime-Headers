@class NSString, NSArray;

@interface IFSearchPathMapper : IFSearch {
    NSString *_tokenizedString;
    NSArray *_tokens;
    NSString *_tokenPrefix;
}

- (void)dealloc;
- (BOOL)containsUserLocation;
- (id)initWithXMLElement:(id)a0;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;
- (id)initWithIdentifier:(id)a0 andIFPkgPathMapping:(id)a1 andTokenPrefix:(id)a2;
- (id)_getTokenListFromString:(id)a0;

@end
