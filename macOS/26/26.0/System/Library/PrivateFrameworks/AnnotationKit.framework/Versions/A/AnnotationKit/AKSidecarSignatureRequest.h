@class NSArray, NSString, SidecarRequest;
@protocol AKSidecarSignatureRequestDelegate;

@interface AKSidecarSignatureRequest : NSObject <SidecarRequestDelegate> {
    SidecarRequest *_request;
    BOOL _registeredObserver;
}

@property (class, readonly) NSArray *availableDevices;
@property (class, readonly) NSString *localizedDeviceDescription;

@property (weak) id<AKSidecarSignatureRequestDelegate> delegate;

+ (id)service;

- (void)clear;
- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)sidecarRequest:(id)a0 receivedItems:(id)a1;
- (void)_cleanupRequest;
- (void)_handleInternalFailure;
- (void)_handlePathMesssage:(id)a0 complete:(BOOL)a1;
- (void)_handleSignatureCleared;
- (void)startWithDevice:(id)a0;

@end
