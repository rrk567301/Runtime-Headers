@class EDSelectedDecoder, MEAppExtensionsController, EFCancelationToken, EFLocked;

@interface EDMessageDecoder : NSObject <MEAppExtensionsObserver> {
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
    EDSelectedDecoder *_selectedDecoder;
    BOOL _shouldFindSelectedDecoder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL isUsingDefaultDecoder;

+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithExtensionsController:(id)a0;
- (void)extensionsMatched:(id)a0;
- (void)extensionsNoLongerMatching:(id)a0;
- (void)_clearSelectedDecoder;
- (id)_nts_getSelectedDecoder;
- (id)_selectedDecoder;
- (id)decodedMessageForMessageData:(id)a0;

@end
