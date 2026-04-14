@class CKDistributedTimestampStateVector;

@interface CCFetchMergeableDeltasRequest : CCPeerToPeerMessage

@property (retain, nonatomic) CKDistributedTimestampStateVector *stateVector;
@property (nonatomic) unsigned long long atomBatchVersion;
@property (nonatomic) BOOL isReciprocalRequest;

+ (id)fetchMergableDeltasRequestFromPeerToPeerMessage:(id)a0 stateVector:(id)a1 atomBatchVersion:(unsigned long long)a2 isReciprocalRequest:(BOOL)a3;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
