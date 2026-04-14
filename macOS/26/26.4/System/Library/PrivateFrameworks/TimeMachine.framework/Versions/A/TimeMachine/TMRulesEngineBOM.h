@class NSSet, NSArray, NSString, NSMutableDictionary;

@interface TMRulesEngineBOM : NSObject {
    NSMutableDictionary *_systemFilesExcludedMap;
}

@property unsigned int baseRuleSet;
@property (copy) NSSet *sourceDisks;
@property (copy) NSSet *spotlightOracles;
@property (copy) NSSet *userHomes;
@property (copy) NSArray *pathExclusions;
@property (copy) NSArray *volumeUUIDExclusions;
@property (copy) NSString *mailRealmSubpath;

- (void).cxx_destruct;
- (id)init;
- (void)setSystemFilesExcludedForMountPoint:(id)a0;
- (BOOL)systemFilesExcludedForMountPoint:(id)a0;

@end
