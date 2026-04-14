@class NSDictionary, NSString;

@interface SMMigrationIncompatibleApplicationsList : NSObject {
    NSDictionary *iaList;
    NSString *systemRootPath;
}

- (void).cxx_destruct;
- (BOOL)isPathInIncompatibleApplicationsList:(id)a0;
- (BOOL)prepareIncompatibleApplicationsList:(id)a0 forSMSystem:(id)a1;
- (id)loadPlist:(id)a0;

@end
