@class CCSet, CKDistributedTimestampStateVector, NSData;

@interface CCFetchMergeableDeltasRequest : CCPeerToPeerMessage

@property (retain, nonatomic) CCSet *set;
@property (retain, nonatomic) CKDistributedTimestampStateVector *stateVector;
@property (nonatomic) unsigned long long atomBatchVersion;
@property (nonatomic) unsigned short requestOptions;
@property (retain, nonatomic) NSData *peerPublicKey;

+ (id)fetchMergableDeltasRequestFromPeerToPeerMessage:(id)a0 set:(id)a1 stateVector:(id)a2 atomBatchVersion:(unsigned long long)a3 requestOptions:(unsigned short)a4;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
