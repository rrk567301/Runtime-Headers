@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRDictionaryProtobuf, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char location : 1; unsigned char sendingPlaybackQueueTransaction : 1; } _has;
}

@property (nonatomic) char hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) char hasResolvedPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (nonatomic) char hasSendingPlaybackQueueTransaction;
@property (nonatomic) char sendingPlaybackQueueTransaction;
@property (readonly, nonatomic) char hasQueueIdentifier;
@property (retain, nonatomic) NSString *queueIdentifier;
@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSMutableArray *homeUserIdentifiers;
@property (readonly, nonatomic) char hasProperties;
@property (retain, nonatomic) _MRDictionaryProtobuf *properties;
@property (readonly, nonatomic) char hasAuxiliaryNowPlayingInfo;
@property (retain, nonatomic) _MRDictionaryProtobuf *auxiliaryNowPlayingInfo;

+ (Class)participantsType;
+ (Class)contentItemType;
+ (Class)homeUserIdentifiersType;

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
- (void)addParticipants:(id)a0;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)a0;
- (unsigned long long)participantsCount;
- (void)addContentItem:(id)a0;
- (void)addHomeUserIdentifiers:(id)a0;
- (void)clearContentItems;
- (void)clearHomeUserIdentifiers;
- (id)contentItemAtIndex:(unsigned long long)a0;
- (unsigned long long)contentItemsCount;
- (id)homeUserIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)homeUserIdentifiersCount;

@end
