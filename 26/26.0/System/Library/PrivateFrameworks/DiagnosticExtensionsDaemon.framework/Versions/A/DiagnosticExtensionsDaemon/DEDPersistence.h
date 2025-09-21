@class NSUserDefaults, NSObject;
@protocol OS_os_log;

@interface DEDPersistence : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (retain) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (BOOL)canProceedWithDevice:(id)a0;
- (void)removeBugSession:(id)a0;
- (id)init;
- (void)validateSandboxAccess;
- (id)_indexKeyForBugSessionIdentifier:(id)a0;
- (id)loadSavedBugSessions;
- (id)bugSessionIdentifiers;
- (void)updateBugSession:(id)a0;
- (id)loadSavedSessionsFromPlist:(id)a0;
- (id)_indexKeyForBugSession:(id)a0;
- (void).cxx_destruct;

@end
