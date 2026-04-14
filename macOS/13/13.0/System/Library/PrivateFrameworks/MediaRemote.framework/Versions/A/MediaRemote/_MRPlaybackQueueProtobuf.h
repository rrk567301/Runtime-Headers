@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

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

+ (Class)participantsType;
+ (Class)contentItemType;

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
- (void)clearParticipants;
- (void)addParticipants:(id)a0;
- (unsigned long long)participantsCount;
- (id)participantsAtIndex:(unsigned long long)a0;
- (void)addContentItem:(id)a0;
- (void)clearContentItems;
- (unsigned long long)contentItemsCount;
- (id)contentItemAtIndex:(unsigned long long)a0;

@end
