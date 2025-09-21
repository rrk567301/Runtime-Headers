@interface LFQuitUtilities : NSObject

- (id)appInfoForLSASNRef:(struct __LSASN { } *)a0 desiredInfo:(id)a1;
- (id)LFGUIAppsToQuit:(id)a0;
- (id)appDisplayName:(id)a0;
- (int)appPID:(id)a0;
- (id)appBundleID:(id)a0;
- (char)appIsPrivateApp:(id)a0;
- (char)appIsRunning:(id)a0;
- (char)appIsStopped:(id)a0;
- (char)appIsUIElementApp:(id)a0;
- (struct __LSASN { } *)appLSASNRef:(id)a0;
- (id)appPath:(id)a0;
- (char)appShouldBeQuitAtGUIQuit:(id)a0;
- (id)appType:(id)a0;
- (char)boolForKey:(id)a0 fromDictionary:(id)a1 withDefault:(char)a2;
- (struct __LSASN { } *)copyLSASNRefForBundleID:(id)a0;

@end
