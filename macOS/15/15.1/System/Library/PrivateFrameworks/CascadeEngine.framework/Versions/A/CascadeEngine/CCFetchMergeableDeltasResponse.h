@class NSData;

@interface CCFetchMergeableDeltasResponse : CCPeerToPeerMessage

@property (retain, nonatomic) NSData *mergeableDelta;
@property (retain, nonatomic) NSData *mergeableDeltaMetadataVectors;

+ (id)fetchMergeableDeltasResponseFromPeerToPeerMessage:(id)a0 mergeableDelta:(id)a1 mergeableDeltaMetadataVectors:(id)a2;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
