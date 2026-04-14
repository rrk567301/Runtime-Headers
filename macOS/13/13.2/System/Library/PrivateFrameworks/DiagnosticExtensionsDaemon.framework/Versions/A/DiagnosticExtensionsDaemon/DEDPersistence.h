@class NSUserDefaults, NSObject;
@protocol OS_os_log;

@interface DEDPersistence : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (retain) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProceedWithDevice:(id)a0;
- (id)loadSavedSessionsFromPlist:(id)a0;
- (id)loadSavedBugSessions;
- (void)updateBugSession:(id)a0;
- (void)removeBugSession:(id)a0;
- (id)_indexKeyForBugSession:(id)a0;
- (id)_indexKeyForBugSessionIdentifier:(id)a0;
- (id)bugSessionIdentifiers;
- (void)validateSandboxAccess;

@end
