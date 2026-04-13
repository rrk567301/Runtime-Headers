@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSSafariSettingsSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)syncEnabled;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)saveSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)saveImageWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)syncSettingsDownWithCompletion:(id /* block */)a0;
- (void)syncSettingsUpWithCompletion:(id /* block */)a0;
- (void)registerDiagnosticInfo:(id)a0;

@end
