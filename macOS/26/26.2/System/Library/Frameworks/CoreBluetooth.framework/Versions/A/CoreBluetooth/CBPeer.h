@class CBManager, NSUUID;

@interface CBPeer : NSObject <NSCopying>

@property (nonatomic) unsigned long long mtuLength;
@property (nonatomic) long long pairingState;
@property (nonatomic) long long hostState;
@property (nonatomic) BOOL isLinkEncrypted;
@property (nonatomic) long long role;
@property (weak, nonatomic) CBManager *manager;
@property (nonatomic) unsigned char connectedTransport;
@property (readonly, nonatomic) struct __CFUUID { } *UUID;
@property (readonly, nonatomic) NSUUID *identifier;

- (void)tag:(id)a0;
- (id)getTags;
- (void)sendInternalMsg:(int)a0 args:(id)a1;
- (void)handleHostStateUpdated:(id)a0;
- (void)handleLinkEncryptionChanged:(id)a0;
- (id)initWithInfo:(id)a0 manager:(id)a1;
- (id)sendInternalSyncMsg:(int)a0 args:(id)a1;
- (void)handleMsg:(int)a0 args:(id)a1;
- (unsigned long long)hash;
- (id)peerStateToString:(long long)a0;
- (id)customProperty:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasTag:(id)a0;
- (void).cxx_destruct;
- (void)setCustomProperty:(id)a0 value:(id)a1;
- (void)untag:(id)a0;
- (id)customPropertyNames;
- (void)handleMTUChanged:(id)a0;
- (void)dealloc;

@end
