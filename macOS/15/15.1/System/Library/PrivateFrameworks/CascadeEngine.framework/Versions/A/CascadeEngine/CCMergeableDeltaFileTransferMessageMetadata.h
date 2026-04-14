@class NSData;

@interface CCMergeableDeltaFileTransferMessageMetadata : CCPeerToPeerMessage

@property (nonatomic) unsigned long long fileFormatVersion;
@property (retain, nonatomic) NSData *mergeableDeltaMetadataVectors;

+ (id)mergeableDeltaFileTransferMessageMetadataFromPeerToPeerMessage:(id)a0 mergeableDeltaMetadataVectors:(id)a1 fileFormatVersion:(unsigned long long)a2 peerPublicKey:(id)a3;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;

@end
