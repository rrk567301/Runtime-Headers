@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCachedIrPurgingHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate, CSAttSiriMitigationAssetHandlerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_purgeCachedIrExceptActiveCachedIrs:(id)a0 cachedIrDir:(id)a1;
- (void)_purgeCachedIrFilesWithAsset:(id)a0;
- (void)cleanUpCachedIrDir;
- (void)cleanUpPreviousBuildBnnsIrInCachedIrDir:(id)a0;
- (void)cleanUpWithCachedIrDir:(id)a0;
- (void)mitigationAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;
- (void)purgeCachedIrForTrialAssetExcludingCurrentAsset:(id)a0 baseCachedIrDir:(id)a1;
- (void)startRegistration;
- (void)voiceTriggerAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;

@end
