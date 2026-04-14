@interface CCSignalDoneFetchingMergeableDeltas : CCPeerToPeerMessage

@property (nonatomic) BOOL isReciprocalRequest;

+ (id)doneFetchingMergeableDeltasMessageFromPeerToPeerMessage:(id)a0 isReciprocal:(BOOL)a1;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
