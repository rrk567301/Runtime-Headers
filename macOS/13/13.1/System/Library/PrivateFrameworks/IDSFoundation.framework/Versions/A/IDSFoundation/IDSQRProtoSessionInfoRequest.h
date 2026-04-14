@class NSMutableArray;

@interface IDSQRProtoSessionInfoRequest : PBRequest <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _publishedStreamIds;
    struct { unsigned char generationCounter : 1; unsigned char linkId : 1; unsigned char maxConcurrentStreams : 1; unsigned char requestId : 1; unsigned char allWildcardSubscription : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long publishedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *publishedStreamIds;
@property (retain, nonatomic) NSMutableArray *subscribedStreams;
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL allWildcardSubscription;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) unsigned int requestId;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;

+ (Class)subscribedStreamsType;

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
- (void)clearPublishedStreamIds;
- (void)addPublishedStreamIds:(unsigned int)a0;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPublishedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearSubscribedStreams;
- (void)addSubscribedStreams:(id)a0;
- (unsigned long long)subscribedStreamsCount;
- (id)subscribedStreamsAtIndex:(unsigned long long)a0;

@end
