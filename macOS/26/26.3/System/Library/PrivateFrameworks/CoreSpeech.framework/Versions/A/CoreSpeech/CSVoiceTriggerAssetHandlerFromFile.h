@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;
}

- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)a0;
- (void)start;
- (id)init;
- (void)triggerAssetRefresh;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;

@end
