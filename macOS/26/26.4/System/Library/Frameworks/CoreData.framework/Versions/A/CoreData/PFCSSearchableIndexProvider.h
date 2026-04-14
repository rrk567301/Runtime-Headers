@interface PFCSSearchableIndexProvider : NSObject

- (id)createPrivateSearchableIndexWithPath:(id)a0;
- (id)defaultSearchableIndex;
- (id)createPrivateSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)createSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)defaultPrivateSearchableIndex;

@end
