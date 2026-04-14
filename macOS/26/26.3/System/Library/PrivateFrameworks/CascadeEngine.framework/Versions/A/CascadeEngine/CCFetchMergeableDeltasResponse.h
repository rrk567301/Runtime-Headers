@class NSData;

@interface CCFetchMergeableDeltasResponse : CCPeerToPeerMessage

@property (retain, nonatomic) NSData *peerPublicKey;

+ (id)fetchMergeableDeltasResponseFromPeerToPeerMessage:(id)a0 peerPublicKey:(id)a1;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
