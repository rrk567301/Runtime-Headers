@class CCSet, CKDistributedTimestampStateVector;

@interface CCFetchMergeableDeltasRequest : CCPeerToPeerMessage

@property (retain, nonatomic) CCSet *set;
@property (retain, nonatomic) CKDistributedTimestampStateVector *stateVector;
@property (nonatomic) unsigned long long atomBatchVersion;

+ (id)fetchMergableDeltasRequestFromPeerToPeerMessage:(id)a0 set:(id)a1 stateVector:(id)a2 atomBatchVersion:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
