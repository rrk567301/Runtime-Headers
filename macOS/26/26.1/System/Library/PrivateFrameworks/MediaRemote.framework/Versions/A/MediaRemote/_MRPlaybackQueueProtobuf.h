@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRDictionaryProtobuf, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char location : 1; unsigned char sendingPlaybackQueueTransaction : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) BOOL hasResolvedPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (nonatomic) BOOL hasSendingPlaybackQueueTransaction;
@property (nonatomic) BOOL sendingPlaybackQueueTransaction;
@property (readonly, nonatomic) BOOL hasQueueIdentifier;
@property (retain, nonatomic) NSString *queueIdentifier;
@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSMutableArray *homeUserIdentifiers;
@property (readonly, nonatomic) BOOL hasProperties;
@property (retain, nonatomic) _MRDictionaryProtobuf *properties;
@property (readonly, nonatomic) BOOL hasAuxiliaryNowPlayingInfo;
@property (retain, nonatomic) _MRDictionaryProtobuf *auxiliaryNowPlayingInfo;

+ (Class)participantsType;
+ (Class)contentItemType;
+ (Class)homeUserIdentifiersType;

- (void)clearParticipants;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)clearContentItems;
- (void)clearHomeUserIdentifiers;
- (unsigned long long)homeUserIdentifiersCount;
- (id)participantsAtIndex:(unsigned long long)a0;
- (void)addParticipants:(id)a0;
- (id)description;
- (unsigned long long)participantsCount;
- (unsigned long long)contentItemsCount;
- (void)addHomeUserIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)contentItemAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (id)homeUserIdentifiersAtIndex:(unsigned long long)a0;
- (void)addContentItem:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
