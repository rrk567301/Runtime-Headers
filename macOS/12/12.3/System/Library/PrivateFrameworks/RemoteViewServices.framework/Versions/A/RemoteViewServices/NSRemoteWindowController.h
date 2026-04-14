@class NSString, NSLocalWindowWrappingRemoteWindow, NSRemoteServiceConnection, NSObject;
@protocol OS_dispatch_queue, NSRemoteWindowControllerDelegate, NSObject;

@interface NSRemoteWindowController : NSObject <NSRemoteServiceConnectionDelegate> {
    unsigned int _remoteConnectionID;
    unsigned int _remoteWindowID;
    unsigned long long _windowRights;
    unsigned long long _styleMask;
    NSString *_pendingingWindowRightsGrantToken;
    id /* block */ _pendingGrantOfferedBlock;
    unsigned char _remoteOrderPlaceRequestsAccepted : 1;
    unsigned char _requestUpdateSharedWindowFrameInProgress : 1;
}

@property id<NSObject, NSRemoteWindowControllerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, retain) NSLocalWindowWrappingRemoteWindow *window;
@property BOOL isSheet;
@property (readonly, retain) NSRemoteServiceConnection *connection;
@property BOOL canBecomeKeyWindow;
@property BOOL canBecomeMainWindow;
@property (copy) NSString *remoteWindowClass;
@property unsigned char disableAutomaticTermination : 1;

+ (Class)localWindowClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)cleanup;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (void)sendEvent:(id)a0;
- (void)connection:(id)a0 didReceiveError:(id)a1;
- (void)connection:(id)a0 didReceiveRequest:(id)a1;
- (id)sendSynchronousRequest:(id)a0;
- (id)initWithConnection:(id)a0 rights:(unsigned long long)a1;
- (void)_clearPendingWindowRightsGrant;
- (void)_handleReplySetupSharedWindow:(id)a0;
- (id)findAccessibilityChildWindow:(id)a0;
- (id)createAccessibilityChildWindow:(id)a0 withStyle:(id)a1;
- (int)_completeWindowRightsGrant:(const struct { unsigned int x0; unsigned int x1; int x2; unsigned int x3; struct __CFDictionary *x4; struct __CFString *x5; } *)a0;
- (void)_handleReplyActivateSharedWindow:(id)a0;
- (BOOL)blacklistedSelector:(SEL)a0;
- (void)_handleModalSession:(id)a0;
- (void)_handleUserValueChanged:(id)a0;
- (void)_handleRequestUpdateSharedWindowFrame:(id)a0;
- (void)_thisWindowShouldChange:(id)a0;
- (void)_sharedWindowShouldChange:(id)a0;
- (id)initWithRemotePanel:(id)a0 remoteServiceReply:(id)a1 rights:(unsigned long long)a2;
- (BOOL)initializeRemoteWindow;
- (BOOL)asyncSelectFirstResponderWithDirection:(unsigned long long)a0;
- (void)hideSharedWindow:(BOOL)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_performKeyEquivalentWithRequest:(id)a0;

@end
