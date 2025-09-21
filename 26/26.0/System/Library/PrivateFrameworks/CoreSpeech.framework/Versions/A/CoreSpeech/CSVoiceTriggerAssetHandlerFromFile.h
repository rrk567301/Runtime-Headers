@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;
}

- (void)triggerAssetRefresh;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;
- (void)start;
- (id)init;
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;

@end
