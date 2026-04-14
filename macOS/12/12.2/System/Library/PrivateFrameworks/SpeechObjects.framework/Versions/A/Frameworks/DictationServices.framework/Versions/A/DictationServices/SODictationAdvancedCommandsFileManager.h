@class NSNumber, SODictationPreferences;

@interface SODictationAdvancedCommandsFileManager : NSObject {
    NSNumber *_advancedCommandsState;
    SODictationPreferences *_dp;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)getAdvancedCommandsState;
- (void)_handleAdvancedCommandsStateChange:(id)a0;
- (void)_manageSIPFile:(int)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)_waitForSIPStoreToBeUpdated:(int)a0;
- (void)_performBlockWithAdminAuthentication:(id /* block */)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)setAdvancedCommandsFile:(int)a0 withCompletionBlock:(id /* block */)a1;

@end
