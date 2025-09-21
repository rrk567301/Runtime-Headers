@class NSDictionary, NSArray, MRPlayerPath, _MRPlaybackQueueRequestProtobuf, NSString, NSData;

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) double defaultArtworkWidth;
@property (class, readonly, nonatomic) double defaultArtworkHeight;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long location;
@property (nonatomic) char hasLocation;
@property (nonatomic) long long length;
@property (nonatomic) char hasLength;
@property (nonatomic) char hasIncludeMetadata;
@property (nonatomic) char hasArtworkWidth;
@property (nonatomic) char hasArtworkHeight;
@property (nonatomic) char hasIncludeLyrics;
@property (nonatomic) char hasIncludeSections;
@property (nonatomic) char hasIncludeInfo;
@property (nonatomic) char hasIncludeAlignments;
@property (nonatomic) char hasIncludeLanguageOptions;
@property (nonatomic) char hasIncludeAvailableArtworkFormats;
@property (copy, nonatomic) NSArray *contentItemIdentifiers;
@property (nonatomic, getter=isLegacyNowPlayingInfoRequest) char legacyNowPlayingInfoRequest;
@property (nonatomic) char hasLegacyNowPlayingInfoRequest;
@property (nonatomic) unsigned int cachingPolicy;
@property (nonatomic) char hasCachingPolicy;
@property (readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *protobuf;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) char rangeContainsNowPlayingItem;
@property (readonly, nonatomic) char shouldRequestItem;
@property (readonly, nonatomic) char shouldRequestItemNotConsideringMetadata;
@property (readonly, nonatomic) char containsNonDefaultAssets;
@property (readonly, nonatomic) MRPlaybackQueueRequest *skeleton;
@property (readonly, copy, nonatomic) NSString *requestProperties;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) char includeMetadata;
@property (nonatomic) char includeLyrics;
@property (nonatomic) char includeSections;
@property (nonatomic) char includeInfo;
@property (nonatomic) char includeAlignments;
@property (nonatomic) char includeLanguageOptions;
@property (nonatomic) double artworkWidth;
@property (nonatomic) double artworkHeight;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) char hasRange;
@property (nonatomic) char includeAvailableArtworkFormats;
@property (readonly, nonatomic) char includeArtwork;
@property (readonly, nonatomic) char includeRemoteArtwork;
@property (copy, nonatomic) NSArray *requestedArtworkFormats;
@property (copy, nonatomic) NSArray *requestedRemoteArtworkFormats;

+ (id)defaultPlaybackQueueRequest;
+ (id)defaultPlaybackQueueRequestWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)requestWithCurrentState:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)mergeFrom:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (char)match:(id)a0;
- (char)exactMatch:(id)a0;
- (id)initFromTransactionName:(unsigned long long)a0;
- (id)initWithIdentifiers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithProtobuf:(id)a0;
- (void)performRequestForDestination:(id)a0 completion:(id /* block */)a1;
- (id)requestByRemovingArtwork;

@end
