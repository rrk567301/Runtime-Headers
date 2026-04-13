@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject {
    _PFWeakContainerSentenal *_sentenal;
    id _nilNotificationDelegate;
}

- (void)dealloc;
- (id)init;
- (void)weakReferenceBecameNil;
- (BOOL)isTrackingWeakObjectDealloc:(id)a0;
- (void)trackWeakObjectDealloc:(id)a0;
- (void)stopTrackingWeakObjectDealloc:(id)a0;
- (void)setNilNotificationDelegate:(id)a0;

@end
