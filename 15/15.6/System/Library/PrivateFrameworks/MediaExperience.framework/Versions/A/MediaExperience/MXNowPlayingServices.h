@class NSDictionary, NSMutableSet, NSLock, NSMutableArray;

@interface MXNowPlayingServices : NSObject {
    NSMutableArray *mCanBeNowPlayingAppCache;
    NSMutableSet *mNowPlayingAppCache;
    NSLock *mLock;
    NSDictionary *mBrowserNPToHelperBundleID;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)isThisABrowser:(id)a0;
- (void)canBeNowPlayingAppRegisteredCallback:(id)a0;
- (void)canBeNowPlayingAppRegistrationHandler:(char)a0 payload:(id)a1;
- (void)canBeNowPlayingAppUnregisteredCallback:(id)a0;
- (id)copyBundleIDFromPlayerPath:(id)a0;
- (char)didAppRegisterForCanBeNowPlaying:(id)a0;
- (void)dumpCache;
- (char)isAppNowPlaying:(id)a0;
- (void)isSessionNowPlaying:(id)a0;
- (void)nowPlayingAppStateChangedCallback:(id)a0;
- (void)writeCanBeNowPlayingAppOnDisk;

@end
