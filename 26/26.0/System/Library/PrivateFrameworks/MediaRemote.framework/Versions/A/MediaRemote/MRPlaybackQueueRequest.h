@class NSDictionary, NSArray, MRPlayerPath, _MRPlaybackQueueRequestProtobuf, NSString, NSData;

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) double defaultArtworkWidth;
@property (class, readonly, nonatomic) double defaultArtworkHeight;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long location;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) long long length;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasIncludeMetadata;
@property (nonatomic) BOOL hasArtworkWidth;
@property (nonatomic) BOOL hasArtworkHeight;
@property (nonatomic) BOOL hasIncludeLyrics;
@property (nonatomic) BOOL hasIncludeSections;
@property (nonatomic) BOOL hasIncludeInfo;
@property (nonatomic) BOOL hasIncludeAlignments;
@property (nonatomic) BOOL hasIncludeLanguageOptions;
@property (nonatomic) BOOL hasIncludeAvailableArtworkFormats;
@property (copy, nonatomic) NSArray *contentItemIdentifiers;
@property (nonatomic, getter=isLegacyNowPlayingInfoRequest) BOOL legacyNowPlayingInfoRequest;
@property (nonatomic) BOOL hasLegacyNowPlayingInfoRequest;
@property (nonatomic) unsigned int cachingPolicy;
@property (nonatomic) BOOL hasCachingPolicy;
@property (readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *protobuf;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) BOOL rangeContainsNowPlayingItem;
@property (readonly, nonatomic) BOOL shouldRequestItem;
@property (readonly, nonatomic) BOOL shouldRequestItemNotConsideringMetadata;
@property (readonly, nonatomic) BOOL containsNonDefaultAssets;
@property (readonly, nonatomic) MRPlaybackQueueRequest *skeleton;
@property (readonly, copy, nonatomic) NSString *requestProperties;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) BOOL includeMetadata;
@property (nonatomic) BOOL includeLyrics;
@property (nonatomic) BOOL includeSections;
@property (nonatomic) BOOL includeInfo;
@property (nonatomic) BOOL includeAlignments;
@property (nonatomic) BOOL includeLanguageOptions;
@property (nonatomic) double artworkWidth;
@property (nonatomic) double artworkHeight;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) BOOL hasRange;
@property (nonatomic) BOOL includeAvailableArtworkFormats;
@property (readonly, nonatomic) BOOL includeArtwork;
@property (readonly, nonatomic) BOOL includeRemoteArtwork;
@property (copy, nonatomic) NSArray *requestedArtworkFormats;
@property (copy, nonatomic) NSArray *requestedRemoteArtworkFormats;
@property (copy, nonatomic) NSArray *requestedAnimatedArtworkPreviewFrameFormats;
@property (copy, nonatomic) NSArray *requestedAnimatedArtworkAssetURLFormats;

+ (id)defaultPlaybackQueueRequestWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)requestWithCurrentState:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)defaultPlaybackQueueRequest;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (BOOL)match:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)exactMatch:(id)a0;
- (id)initFromTransactionName:(unsigned long long)a0;
- (id)initWithIdentifiers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)performRequestForDestination:(id)a0 completion:(id /* block */)a1;
- (id)requestByRemovingArtwork;

@end
