@interface PFCSSearchableIndexProvider : NSObject

- (id)defaultSearchableIndex;
- (id)defaultPrivateSearchableIndex;
- (id)createPrivateSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)createPrivateSearchableIndexWithPath:(id)a0;
- (id)createSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;

@end
