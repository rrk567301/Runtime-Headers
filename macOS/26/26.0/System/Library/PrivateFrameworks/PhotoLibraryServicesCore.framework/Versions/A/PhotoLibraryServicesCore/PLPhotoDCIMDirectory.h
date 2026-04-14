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
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (id)userInfo;
- (void).cxx_destruct;
- (void)saveUserInfo;
- (id)userInfoObjectForKey:(id)a0;
- (id)posterImagePath;
- (void)unlockDirectory;
- (id)_userInfoPath;
- (void)clearDCFDirectories;
- (id)dcfDirectories;
- (id)dcimPath;
- (BOOL)hasChangedExternally;
- (id)initWithDCIMPath:(id)a0;
- (void)lockDirectory;
- (id)miscPath;
- (id)nextAvailableDirectory;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (void)setHasChangedExternally:(BOOL)a0;

@end
