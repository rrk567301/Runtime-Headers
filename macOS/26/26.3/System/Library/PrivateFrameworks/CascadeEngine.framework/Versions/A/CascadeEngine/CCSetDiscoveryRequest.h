@class NSArray, CCSet, NSNumber;

@interface CCSetDiscoveryRequest : CCPeerToPeerMessage

@property (retain, nonatomic) NSArray *setUUIDsToDiscover;
@property (nonatomic) unsigned short requestOptions;
@property (retain, nonatomic) CCSet *startAfterSet;
@property (retain, nonatomic) NSNumber *sizeThreshold;

+ (id)setDiscoveryRequestFromPeerToPeerMessage:(id)a0 setUUIDsToDiscover:(id)a1 requestOptions:(unsigned short)a2 startAfterSet:(id)a3 sizeThreshold:(id)a4;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
