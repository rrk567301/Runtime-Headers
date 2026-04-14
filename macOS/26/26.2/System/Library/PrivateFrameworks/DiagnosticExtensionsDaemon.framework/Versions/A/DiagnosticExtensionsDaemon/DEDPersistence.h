@class NSUserDefaults, NSObject;
@protocol OS_os_log;

@interface DEDPersistence : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (retain) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (id)loadSavedSessionsFromPlist:(id)a0;
- (void)removeBugSession:(id)a0;
- (id)_indexKeyForBugSessionIdentifier:(id)a0;
- (BOOL)canProceedWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)_indexKeyForBugSession:(id)a0;
- (void)updateBugSession:(id)a0;
- (id)loadSavedBugSessions;
- (void)validateSandboxAccess;
- (id)init;
- (id)bugSessionIdentifiers;

@end
