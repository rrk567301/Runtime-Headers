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

- (void)clearHomeUserIdentifiers;
- (void)addParticipants:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addContentItem:(id)a0;
- (void)addHomeUserIdentifiers:(id)a0;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (unsigned long long)participantsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearContentItems;
- (id)homeUserIdentifiersAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)homeUserIdentifiersCount;
- (id)contentItemAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)contentItemsCount;
- (void).cxx_destruct;

@end
