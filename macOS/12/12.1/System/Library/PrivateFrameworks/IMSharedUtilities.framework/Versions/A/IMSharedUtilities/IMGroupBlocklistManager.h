@class NSDate;

@interface IMGroupBlocklistManager : NSObject

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlocklistFilename;

- (id)init;
- (void).cxx_destruct;
- (void)save;
- (void)reloadIfNeeded;
- (id)initFromFile:(id)a0;
- (void)loadFromFile:(id)a0;
- (BOOL)isFeatureDisabled;
- (void)_updateLastModifiedDate:(id)a0;
- (BOOL)hasFileChanged;
- (void)loadData;
- (void)blocklistGroupId:(id)a0;
- (BOOL)isGroupInBlocklist:(id)a0;

@end
