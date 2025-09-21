@class NSString;

@interface CCSignalDoneFetchingMergeableDeltas : CCPeerToPeerMessage

@property (nonatomic) char isReciprocalRequest;
@property (retain, nonatomic) NSString *rapportIdentifier;

+ (id)doneFetchingMergeableDeltasMessageFromPeerToPeerMessage:(id)a0 isReciprocal:(char)a1 rapportIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
