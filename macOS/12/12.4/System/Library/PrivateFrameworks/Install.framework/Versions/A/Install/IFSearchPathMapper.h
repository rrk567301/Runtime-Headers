@class NSString, NSArray;

@interface IFSearchPathMapper : IFSearch {
    NSString *_tokenizedString;
    NSArray *_tokens;
    NSString *_tokenPrefix;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 andIFPkgPathMapping:(id)a1 andTokenPrefix:(id)a2;
- (BOOL)containsUserLocation;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;
- (id)initWithXMLElement:(id)a0;
- (id)_getTokenListFromString:(id)a0;

@end
