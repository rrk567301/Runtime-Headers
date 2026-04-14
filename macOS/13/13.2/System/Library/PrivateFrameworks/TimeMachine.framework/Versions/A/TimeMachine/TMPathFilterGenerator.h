@class NSString, NSMutableSet, MDSPathFilterGenerator;

@interface TMPathFilterGenerator : NSObject {
    MDSPathFilterGenerator *_baseFilterGenerator;
    MDSPathFilterGenerator *_customExclusionsFilterGenerator;
}

@property (readonly) unsigned int baseRuleSet;
@property (readonly) NSString *mountPoint;
@property (readonly) NSMutableSet *stickyExclusionPaths;

+ (id)_extensionMapForRuleSet:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithBaseRuleSet:(unsigned int)a0 forMountPoint:(id)a1;
- (id)_customExclusionsFilterGenerator;
- (id)copyBasePathFilter;
- (id)copyCustomExclusionsPathFilter;
- (id)_copyCompiledFilterGenerator:(id)a0;
- (void)addUserLibraryMailRealm:(id)a0;
- (void)addRulesForUserHome:(id)a0;
- (void)addExclusionForPath:(id)a0;
- (void)addStickyExclusionForPath:(id)a0;
- (void)_addCustomExclusionForPath:(id)a0;
- (id)_rerootPath:(id)a0;
- (BOOL)_canExcludePath:(id)a0;

@end
