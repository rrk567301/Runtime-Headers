@class NSString, PHPhotoLibrary, CPLStatus;

@interface PXCMMEnabledStatusProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver> {
    BOOL _isFeatureEnabled;
    BOOL _isCPLEnabled;
    BOOL _hasExitDate;
    PHPhotoLibrary *_ph_photoLibrary;
    CPLStatus *_cplStatus;
}

@property (class, readonly) PXCMMEnabledStatusProvider *currentStatusProvider;

@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)statusDidChange:(id)a0;
- (BOOL)_isFeatureEnabled;
- (BOOL)_isCPLEnabled;
- (BOOL)_hasExitDate;
- (BOOL)_isCMMEnabled;
- (void)_updateIsCMMEnabled;
- (void)_updateIsFeatureEnabled;
- (void)_updateHasExitDate;
- (void)_updateIsCPLEnabled;

@end
