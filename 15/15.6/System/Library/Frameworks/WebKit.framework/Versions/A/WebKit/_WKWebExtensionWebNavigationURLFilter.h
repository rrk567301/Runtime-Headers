@class NSArray;

@interface _WKWebExtensionWebNavigationURLFilter : NSObject {
    NSArray *_predicateGroups;
}

- (void).cxx_destruct;
- (char)matchesURL:(id)a0;
- (id)initWithDictionary:(id)a0 outErrorMessage:(id *)a1;

@end
