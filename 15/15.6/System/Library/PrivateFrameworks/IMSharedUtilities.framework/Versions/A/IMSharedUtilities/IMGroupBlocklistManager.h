@class NSDate;

@interface IMGroupBlocklistManager : NSObject

@property (retain) NSDate *lastModifiedDate;

+ (id)sharedInstance;
+ (id)groupsBlocklistFilename;

- (id)init;
- (void).cxx_destruct;
- (void)save;
- (void)loadData;
- (void)reloadIfNeeded;
- (void)_updateLastModifiedDate:(id)a0;
- (void)blocklistGroupId:(id)a0;
- (char)hasFileChanged;
- (id)initFromFile:(id)a0;
- (char)isFeatureDisabled;
- (char)isGroupInBlocklist:(id)a0;
- (void)loadFromFile:(id)a0;

@end
