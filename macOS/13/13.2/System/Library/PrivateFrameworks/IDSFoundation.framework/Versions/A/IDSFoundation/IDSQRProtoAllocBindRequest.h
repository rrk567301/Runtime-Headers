@class NSString, NSMutableArray, NSData;

@interface IDSQRProtoAllocBindRequest : PBRequest <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _publishedStreamIds;
    struct { unsigned char capabilities : 1; unsigned char channelBindingInfo : 1; unsigned char maxConcurrentStreams : 1; unsigned char maxEmbeddedStatsResponseDelay : 1; unsigned char serviceId : 1; unsigned char allWildcardSubscription : 1; } _has;
}

@property (nonatomic) BOOL hasServiceId;
@property (nonatomic) unsigned int serviceId;
@property (readonly, nonatomic) BOOL hasClientOsVersion;
@property (retain, nonatomic) NSString *clientOsVersion;
@property (readonly, nonatomic) BOOL hasClientHwVersion;
@property (retain, nonatomic) NSString *clientHwVersion;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long publishedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *publishedStreamIds;
@property (retain, nonatomic) NSMutableArray *subscribedStreams;
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL allWildcardSubscription;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic) BOOL hasChannelBindingInfo;
@property (nonatomic) unsigned int channelBindingInfo;
@property (nonatomic) BOOL hasMaxEmbeddedStatsResponseDelay;
@property (nonatomic) unsigned int maxEmbeddedStatsResponseDelay;
@property (readonly, nonatomic) BOOL hasRandomSalt;
@property (retain, nonatomic) NSData *randomSalt;
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (retain, nonatomic) NSData *accessToken;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;
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
- (void)clearMaterials;
- (void)addMaterials:(id)a0;
- (unsigned long long)materialsCount;
- (id)materialsAtIndex:(unsigned long long)a0;
- (void)clearPublishedStreamIds;
- (void)addPublishedStreamIds:(unsigned int)a0;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPublishedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearSubscribedStreams;
- (void)addSubscribedStreams:(id)a0;
- (unsigned long long)subscribedStreamsCount;
- (id)subscribedStreamsAtIndex:(unsigned long long)a0;

@end
