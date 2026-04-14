@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;
}

- (void)triggerAssetRefresh;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)a0;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;

@end
