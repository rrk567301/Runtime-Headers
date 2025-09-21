@class NSString, NSXPCConnection, IMKClient, NSMutableDictionary, NSMutableArray;

@interface IMKInputSession : NSObject <IMKTextInput, IMKUnicodeTextInput, IMTSMSupport, IMKXPCSupport, IMKTextInput_FunctionRowUI, IMKTextInput_AutoCorrection, IMKTextInput_NSAppearance> {
    IMKClient *_client;
    NSMutableDictionary *_supportedEvents;
    int _eventStatus;
    struct OpaqueTSMDocumentID { } *_tsmDocument;
    long long _charactersEntered;
    struct _NSRange { unsigned long long location; unsigned long long length; } _markedRange;
    char _supportsDocumentAccess;
    long long _eventPending;
    char _commiting;
    char _sessionFinishedPreviously;
    char _allowRetryOnInvalidPortException;
    char didActivate;
    char activatePending;
    char deferredActivatePending;
    char deferredActivateHaveEventsQueued;
    char deferredActivateHaveInputSessionActionsQueued;
    NSMutableArray *queuedInputSessionActions;
    NSMutableArray *queuedDeferredEvents;
    NSString *deferredActivateInputMode;
    NSMutableDictionary *placeholdersCachedWeakRef;
    NSMutableDictionary *_pendingEvents;
    NSXPCConnection *inputMethodXPCConnection;
    id touchBarViewController;
}

@property char _allowRetryOnInvalidPortException;
@property char didActivate;
@property char activatePending;
@property char deferredActivatePending;
@property (retain, nonatomic) NSString *deferredActivateInputMode;
@property char deferredActivateHaveEventsQueued;
@property char deferredActivateHaveInputSessionActionsQueued;
@property (retain, nonatomic) NSMutableArray *queuedInputSessionActions;
@property (retain, nonatomic) NSMutableArray *queuedDeferredEvents;
@property (retain, nonatomic) NSXPCConnection *inputMethodXPCConnection;
@property (retain, nonatomic) id touchBarViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)IMKXPCPerformBlockOnMainThreadInMode:(struct __CFString { } *)a0 performHow:(int)a1 callerCmd:(SEL)a2 workBlock:(id /* block */)a3;
+ (void)IMKCFRunLoopSetup;
+ (id)inputSessionWithClient:(id)a0 document:(struct OpaqueTSMDocumentID { } *)a1;
+ (Class)subclass;

@end
