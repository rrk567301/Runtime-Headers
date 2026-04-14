@class PLLibraryServicesManager, PLLazyObject;

@interface PLReadyForAnalysis : NSObject {
    unsigned short _readyState;
    PLLibraryServicesManager *_lsm;
    PLLazyObject *_lazyAppPrivateData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) BOOL isReadyForAnalysis;
@property (readonly) BOOL isReadyForAnalysisQuickCheck;
@property (readonly) BOOL isReadyForAnalysisInitialDownloadCompleted;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)appPrivateData;
- (void)_lock_checkCPLInitialDownloadStatusForState:(unsigned short)a0;
- (void)_lock_checkComputeCacheStatusForState:(unsigned short)a0;
- (void)_lock_checkIsReadyForAnalysisForState:(unsigned short)a0;
- (void)_lock_checkReadyForCPLStatusForState:(unsigned short)a0;
- (BOOL)_lock_isReadyForAnalysisState:(unsigned short)a0;
- (void)resetReadyForAnalysisState;

@end
