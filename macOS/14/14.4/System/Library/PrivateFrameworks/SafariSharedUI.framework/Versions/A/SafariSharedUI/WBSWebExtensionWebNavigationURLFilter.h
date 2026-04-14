@class NSArray;

@interface WBSWebExtensionWebNavigationURLFilter : NSObject {
    NSArray *_predicateGroups;
}

- (void).cxx_destruct;
- (BOOL)matchesURL:(id)a0;
- (id)initWithDictionary:(id)a0 outErrorMessage:(id *)a1;

@end
