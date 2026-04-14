@interface FBKDEDHelper : NSObject

+ (id)_seedingHost;
+ (void)getStateOnSession:(id)a0 withCompletion:(id /* block */)a1;
+ (void)sendLocalFilesToDED:(id)a0 withForm:(id)a1 withCompletion:(id /* block */)a2;
+ (id)bugSessionIDForForm:(id)a0 device:(id)a1;
+ (void)getSessionForForm:(id)a0 device:(id)a1 completion:(id /* block */)a2;
+ (id)adoptSessionIdWithExistingSessionId:(id)a0;
+ (void)reconnectBugSessionWithIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)_getSessionWithIdentifier:(id)a0 configuration:(id)a1 device:(id)a2 getDetails:(BOOL)a3 completion:(id /* block */)a4;
+ (void)_getSessionForForm:(id)a0 device:(id)a1 isAdoptingSession:(BOOL)a2 completion:(id /* block */)a3;
+ (void)_getBugSessionConfigWithSubmissionType:(long long)a0 formId:(long long)a1 device:(id)a2 completion:(id /* block */)a3;
+ (id)_seedPortal;
+ (void)didFailToPinpairOnDemandWithCompletion:(id /* block */)a0 device:(id)a1 error:(long long)a2 identifier:(id)a3 observer:(id)a4;
+ (void)_getSessionWithIdentifier:(id)a0 configuration:(id)a1 dedDevice:(id)a2 getDetails:(BOOL)a3 completion:(id /* block */)a4;
+ (void)_startSessionByFirstPairingWithDeviceWithCompletion:(id /* block */)a0 config:(id)a1 device:(id)a2 grouped:(id)a3 identifier:(id)a4 shouldGetDetails:(BOOL)a5;
+ (id)bugSessionIDForAdoptingLocalFilesWithFilerForm:(id)a0;
+ (void)reconnectWithBugSessionWithIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)cleanupBugSessionDirectoriesForForm:(id)a0;

@end
