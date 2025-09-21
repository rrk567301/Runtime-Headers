@class NSMutableArray;

@interface IDSQRProtoSessionInfoRequest : PBRequest <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _publishedStreamIds;
    struct { unsigned char commandFlags : 1; unsigned char generationCounter : 1; unsigned char linkId : 1; unsigned char maxConcurrentStreams : 1; unsigned char requestId : 1; unsigned char allWildcardSubscription : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long publishedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *publishedStreamIds;
@property (retain, nonatomic) NSMutableArray *subscribedStreams;
@property (nonatomic) char hasAllWildcardSubscription;
@property (nonatomic) char allWildcardSubscription;
@property (nonatomic) char hasMaxConcurrentStreams;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic) char hasLinkId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) char hasRequestId;
@property (nonatomic) unsigned int requestId;
@property (nonatomic) char hasCommandFlags;
@property (nonatomic) unsigned int commandFlags;
@property (nonatomic) char hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;

+ (Class)subscribedStreamsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPublishedStreamIds:(unsigned int)a0;
- (void)addSubscribedStreams:(id)a0;
- (void)clearPublishedStreamIds;
- (void)clearSubscribedStreams;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPublishedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)subscribedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedStreamsCount;

@end
