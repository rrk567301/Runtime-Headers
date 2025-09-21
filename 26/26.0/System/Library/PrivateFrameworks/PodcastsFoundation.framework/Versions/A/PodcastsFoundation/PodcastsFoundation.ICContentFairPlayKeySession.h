@class NSString, PFFairPlayKeyResponseData, PFFairPlayAsset;

@interface PodcastsFoundation.ICContentFairPlayKeySession : _TtCs12_SwiftObject <PFFairPlayKeySession> {
    void /* function */ id;
    void /* unknown type, empty encoding */ keyStore;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ keyCertificateURL;
    void /* unknown type, empty encoding */ urlConfiguration;
    void /* unknown type, empty encoding */ pendingProcessCompletion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_delegateWrapper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) PFFairPlayAsset *asset;
@property (nonatomic) BOOL bypassCache;
@property (nonatomic, readonly) NSString *keyStoreFilePath;
@property (nonatomic, retain) PFFairPlayKeyResponseData *keyResponseData;

- (void)register;
- (void)deregister;
- (void)pauseAutomaticKeyRenewal;
- (void)resumeAutomaticKeyRenewal;
- (void)processKeyWith:(id)a0 completion:(id /* block */)a1;
- (void)renewKey;
- (void)stopAndInvalidateKeysWithCompletion:(id /* block */)a0;

@end
