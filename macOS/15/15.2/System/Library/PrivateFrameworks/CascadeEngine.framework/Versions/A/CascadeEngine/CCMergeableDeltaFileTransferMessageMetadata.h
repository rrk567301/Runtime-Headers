@class CCSet, NSData;

@interface CCMergeableDeltaFileTransferMessageMetadata : CCPeerToPeerMessage

@property (retain, nonatomic) CCSet *set;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (retain, nonatomic) NSData *mergeableDeltaMetadataVectors;

+ (id)mergeableDeltaFileTransferMessageMetadataFromPeerToPeerMessage:(id)a0 set:(id)a1 mergeableDeltaMetadataVectors:(id)a2 fileFormatVersion:(unsigned long long)a3 peerPublicKey:(id)a4;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
