@class NSArray;

@interface CCSetDiscoveryResponse : CCPeerToPeerMessage

@property (retain, nonatomic) NSArray *discoveredSets;
@property (nonatomic) unsigned short responseOptions;

+ (id)setDiscoveryResponseFromPeerToPeerMessage:(id)a0 discoveredSets:(id)a1 responseOptions:(unsigned short)a2;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;

@end
