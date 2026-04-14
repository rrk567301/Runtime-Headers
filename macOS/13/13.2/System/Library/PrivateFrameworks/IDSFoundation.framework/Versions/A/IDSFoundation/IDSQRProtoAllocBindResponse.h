@class NSString, NSMutableArray, NSData;

@interface IDSQRProtoAllocBindResponse : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _lightweightParticipantIdLists;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerSubscribedStreamIds;
    struct { unsigned char channelSettings : 1; unsigned char generationCounter : 1; unsigned char linkId : 1; unsigned char participantType : 1; unsigned char sessionStateCounter : 1; } _has;
}

@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) unsigned int channelId;
@property (readonly, nonatomic) BOOL hasSoftware;
@property (retain, nonatomic) NSString *software;
@property (retain, nonatomic) NSMutableArray *peerPublishedStreams;
@property (readonly, nonatomic) unsigned long long peerSubscribedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerSubscribedStreamIds;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) BOOL hasChannelSettings;
@property (nonatomic) unsigned int channelSettings;
@property (readonly, nonatomic) BOOL hasReportingDataBlob;
@property (retain, nonatomic) NSData *reportingDataBlob;
@property (readonly, nonatomic) unsigned long long lightweightParticipantIdListsCount;
@property (readonly, nonatomic) unsigned long long *lightweightParticipantIdLists;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) unsigned int participantType;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;
@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;
+ (Class)peerPublishedStreamsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearMaterials;
- (void)addMaterials:(id)a0;
- (unsigned long long)materialsCount;
- (id)materialsAtIndex:(unsigned long long)a0;
- (void)clearPeerPublishedStreams;
- (void)addPeerPublishedStreams:(id)a0;
- (unsigned long long)peerPublishedStreamsCount;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)a0;
- (void)clearPeerSubscribedStreamIds;
- (void)addPeerSubscribedStreamIds:(unsigned int)a0;
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPeerSubscribedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearLightweightParticipantIdLists;
- (void)addLightweightParticipantIdList:(unsigned long long)a0;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)a0;
- (void)setLightweightParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
