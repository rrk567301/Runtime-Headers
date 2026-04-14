@class NSString, NSMutableDictionary, _STSELFLoggingClient;

@interface _STSpeechTranslatorManager : NSObject <_STSpeechTranslatorManaging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSMutableDictionary *_clientLists;
    NSMutableDictionary *_clientPeerToClientListIDMap;
    _STSELFLoggingClient *_selfClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_keyForProxy:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)makePeerWithIdentifier:(id)a0 inReply:(id /* block */)a1;
- (id)_addToClientListWithIdentifier:(id)a0 clientPeer:(id)a1 xpcConnection:(id)a2;
- (void)_cleanUpPrimaryClientPeerWithKey:(id)a0;
- (id)_makeClientListWithConfiguration:(id)a0 clientPeer:(id)a1;
- (id)_remoteObjectProxyForConnection:(id)a0 isPrimary:(BOOL)a1;
- (void)makePeerWithConfiguration:(id)a0 inReply:(id /* block */)a1;

@end
