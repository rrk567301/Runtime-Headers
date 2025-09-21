@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char artworkHeight : 1; unsigned char artworkWidth : 1; unsigned char cachingPolicy : 1; unsigned char length : 1; unsigned char location : 1; unsigned char includeAlignments : 1; unsigned char includeAvailableArtworkFormats : 1; unsigned char includeInfo : 1; unsigned char includeLanguageOptions : 1; unsigned char includeLyrics : 1; unsigned char includeMetadata : 1; unsigned char includeParticipants : 1; unsigned char includeSections : 1; unsigned char isLegacyNowPlayingInfoRequest : 1; unsigned char returnContentItemAssetsInUserCompletion : 1; } _has;
}

@property (nonatomic) char hasLocation;
@property (nonatomic) int location;
@property (nonatomic) char hasLength;
@property (nonatomic) int length;
@property (nonatomic) char hasIncludeMetadata;
@property (nonatomic) char includeMetadata;
@property (nonatomic) char hasArtworkWidth;
@property (nonatomic) double artworkWidth;
@property (nonatomic) char hasArtworkHeight;
@property (nonatomic) double artworkHeight;
@property (nonatomic) char hasIncludeLyrics;
@property (nonatomic) char includeLyrics;
@property (nonatomic) char hasIncludeSections;
@property (nonatomic) char includeSections;
@property (nonatomic) char hasIncludeInfo;
@property (nonatomic) char includeInfo;
@property (nonatomic) char hasIncludeLanguageOptions;
@property (nonatomic) char includeLanguageOptions;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMutableArray *contentItemIdentifiers;
@property (nonatomic) char hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic) char returnContentItemAssetsInUserCompletion;
@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) char hasCachingPolicy;
@property (nonatomic) int cachingPolicy;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasIsLegacyNowPlayingInfoRequest;
@property (nonatomic) char isLegacyNowPlayingInfoRequest;
@property (nonatomic) char hasIncludeParticipants;
@property (nonatomic) char includeParticipants;
@property (nonatomic) char hasIncludeAvailableArtworkFormats;
@property (nonatomic) char includeAvailableArtworkFormats;
@property (retain, nonatomic) NSMutableArray *requestedArtworkFormats;
@property (retain, nonatomic) NSMutableArray *requestedRemoteArtworkFormats;
@property (nonatomic) char hasIncludeAlignments;
@property (nonatomic) char includeAlignments;

+ (Class)contentItemIdentifiersType;
+ (Class)requestedArtworkFormatsType;
+ (Class)requestedRemoteArtworkFormatsType;

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
- (id)requestedArtworkFormatsAtIndex:(unsigned long long)a0;
- (void)addContentItemIdentifiers:(id)a0;
- (void)addRequestedArtworkFormats:(id)a0;
- (void)addRequestedRemoteArtworkFormats:(id)a0;
- (void)clearContentItemIdentifiers;
- (void)clearRequestedArtworkFormats;
- (void)clearRequestedRemoteArtworkFormats;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentItemIdentifiersCount;
- (unsigned long long)requestedArtworkFormatsCount;
- (id)requestedRemoteArtworkFormatsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestedRemoteArtworkFormatsCount;

@end
