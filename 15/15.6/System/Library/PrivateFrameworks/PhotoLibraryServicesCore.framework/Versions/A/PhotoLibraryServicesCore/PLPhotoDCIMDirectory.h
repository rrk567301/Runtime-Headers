@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {
    NSString *_dcimPath;
    NSString *_miscPath;
    NSString *_posterImagePath;
    NSMutableArray *_topLevelDirectories;
    struct __CFDictionary { } *_topLevelDirectoriesByNumber;
    struct __CFSet { } *_unusableTopLevelDirectoryNumbers;
    int _lastUsedDirectoryNumber;
    NSMutableDictionary *_userInfo;
    char _userInfoDidChange;
    struct flock { long long x0; long long x1; int x2; short x3; short x4; } *_dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)userInfo;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)saveUserInfo;
- (id)userInfoObjectForKey:(id)a0;
- (void)unlockDirectory;
- (id)posterImagePath;
- (id)_userInfoPath;
- (void)clearDCFDirectories;
- (id)dcfDirectories;
- (id)dcimPath;
- (char)hasChangedExternally;
- (id)initWithDCIMPath:(id)a0;
- (void)lockDirectory;
- (id)miscPath;
- (id)nextAvailableDirectory;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (void)setHasChangedExternally:(char)a0;

@end
