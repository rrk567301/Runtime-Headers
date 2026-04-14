@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;
}

- (void).cxx_destruct;
- (void)start;
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)a0;
- (void)triggerAssetRefresh;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;

@end
