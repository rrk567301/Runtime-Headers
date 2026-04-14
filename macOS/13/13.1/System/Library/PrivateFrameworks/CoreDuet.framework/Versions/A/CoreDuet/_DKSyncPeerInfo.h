@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject {
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    long long _transports;
}

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;

@end
