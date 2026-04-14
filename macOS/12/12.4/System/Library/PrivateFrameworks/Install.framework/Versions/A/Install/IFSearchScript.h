@class NSMutableString, NSXMLElement;

@interface IFSearchScript : IFSearch {
    NSMutableString *_scripts;
    NSXMLElement *_originalElement;
}

- (void)dealloc;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;
- (id)initWithXMLElement:(id)a0;

@end
