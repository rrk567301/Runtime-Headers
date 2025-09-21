@class NSDate;

@interface IMGroupBlocklistManager : NSObject

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlocklistFilename;

- (void)save;
- (void)loadFromFile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadData;
- (id)initFromFile:(id)a0;
- (void)reloadIfNeeded;
- (void)_updateLastModifiedDate:(id)a0;
- (void)blocklistGroupId:(id)a0;
- (BOOL)hasFileChanged;
- (BOOL)isFeatureDisabled;
- (BOOL)isGroupInBlocklist:(id)a0;

@end
