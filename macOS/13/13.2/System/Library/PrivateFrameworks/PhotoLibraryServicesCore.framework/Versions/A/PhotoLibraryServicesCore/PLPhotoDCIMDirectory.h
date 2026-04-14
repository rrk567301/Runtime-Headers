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
    BOOL _userInfoDidChange;
    struct flock { long long x0; long long x1; int x2; short x3; short x4; } *_dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}

- (void)dealloc;
- (id)userInfo;
- (void).cxx_destruct;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (id)userInfoObjectForKey:(id)a0;
- (void)saveUserInfo;
- (id)_userInfoPath;
- (id)initWithDCIMPath:(id)a0;
- (id)dcimPath;
- (id)miscPath;
- (id)posterImagePath;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (id)dcfDirectories;
- (void)clearDCFDirectories;
- (id)nextAvailableDirectory;
- (void)lockDirectory;
- (void)unlockDirectory;
- (BOOL)hasChangedExternally;
- (void)setHasChangedExternally:(BOOL)a0;

@end
