@class NSData, NEIKEv2CryptoKitSPAKE2Plus;

@interface NEIKEv2GSPM : NSObject {
    NSData *_sessionKey;
    NSData *_nextMessage;
    NEIKEv2CryptoKitSPAKE2Plus *_spake2Handler;
    NSData *_firstLocalMessage;
    NSData *_firstPeerMessage;
}

- (void).cxx_destruct;

@end
