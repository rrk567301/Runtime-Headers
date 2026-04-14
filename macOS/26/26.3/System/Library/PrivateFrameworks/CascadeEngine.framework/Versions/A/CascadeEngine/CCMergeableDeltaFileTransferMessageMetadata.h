@class CCDeviceSite, NSArray, NSData, CCSet;

@interface CCMergeableDeltaFileTransferMessageMetadata : CCPeerToPeerMessage

@property (retain, nonatomic) CCSet *set;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (retain, nonatomic) NSData *mergeableDeltaMetadataVectors;
@property (retain, nonatomic) CCDeviceSite *deviceSite;
@property (retain, nonatomic) NSArray *relayedDeviceSites;

+ (id)mergeableDeltaFileTransferMessageMetadataFromPeerToPeerMessage:(id)a0 set:(id)a1 mergeableDeltaMetadataVectors:(id)a2 fileFormatVersion:(unsigned long long)a3 deviceSite:(id)a4 relayedDeviceSites:(id)a5;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
