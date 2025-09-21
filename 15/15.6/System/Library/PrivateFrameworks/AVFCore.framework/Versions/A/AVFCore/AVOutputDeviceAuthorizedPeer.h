@class NSString, NSData, AVOutputDeviceAuthorizedPeerInternal;

@interface AVOutputDeviceAuthorizedPeer : NSObject {
    AVOutputDeviceAuthorizedPeerInternal *_ivars;
}

@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) char hasAdministratorPrivileges;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithID:(id)a0 publicKey:(id)a1 hasAdministratorPrivileges:(char)a2;

@end
