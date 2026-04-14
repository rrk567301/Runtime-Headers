@class NSXPCConnection, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface AudioAccessoryAssetManagementClient : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSXPCConnection *_xpcAADCnx;
    NSArray *_translationAssets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ translationAssetsInfoHandler;

- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)invalidate;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSystemContext;
- (id)_ensureAADXPCStarted;
- (void)downloadTranslationAssets:(id)a0 useCellular:(BOOL)a1 completion:(id /* block */)a2;
- (void)downloadTranslationAssets:(id)a0 useCellular:(BOOL)a1 showDownloadCompleteNotification:(BOOL)a2 completion:(id /* block */)a3;
- (void)getTranslationAssets;
- (void)getTranslationAssets:(id)a0 error:(id)a1;
- (void)getTranslationAssetsDownloadSize:(id)a0 completion:(id /* block */)a1;
- (void)showDownloadLanguagesNotification:(id)a0;

@end
