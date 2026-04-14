@class NSMutableSet, NSSet, RTIDataPayload, NSXPCConnection, NSString, NSObject, RTIDocumentRequest;
@protocol OS_dispatch_queue;

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableSet *_supplementalLexicons;
    NSMutableSet *_rtiSupplementalLexicons;
}

@property (readonly, nonatomic) unsigned long long payloadVersion;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) RTIDataPayload *currentDataPayload;
@property (retain, nonatomic) RTIDocumentRequest *defaultRequest;
@property (readonly, nonatomic) NSSet *supplementalLexicons;
@property (readonly, nonatomic) NSSet *rtiSupplementalLexicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConnection:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (int)pid;
- (id)bundleIdentifier;
- (id)valueForEntitlement:(id)a0;
- (void)flushOperationsWithResultHandler:(id /* block */)a0;
- (void)flushOperations;
- (void)performDocumentRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleTextActionPayload:(id)a0;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 documentTraits:(id)a1 initialDocumentState:(id)a2;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentDidChange:(id)a1;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 options:(id)a1 documentTraits:(id)a2 initialDocumentState:(id)a3;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0 options:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentTraitsDidChange:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didChangePause:(BOOL)a1 withReason:(id)a2;
- (oneway void)remoteTextInputSessionWithID:(id)a0 textSuggestionsChanged:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddSupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddRTISupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveRTISupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1;
- (void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1 withResponse:(id /* block */)a2;
- (void)didInitializeWithConnection:(id)a0;
- (void)_killConnectionWithCallback;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)a0;

@end
