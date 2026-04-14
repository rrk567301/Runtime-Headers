@class NSData;

@interface CCFetchMergeableDeltasResponse : CCPeerToPeerMessage

@property (retain, nonatomic) NSData *peerPublicKey;

+ (id)fetchMergeableDeltasResponseFromPeerToPeerMessage:(id)a0 peerPublicKey:(id)a1;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
