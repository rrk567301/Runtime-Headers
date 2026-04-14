@class MRArtwork, NSString, NSArray, NSDictionary, MRContentItemMetadata, NSData;

@interface MRContentItem : NSObject <NSCopying> {
    MRContentItemMetadata *_metadata;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MRContentItemMetadata *metadata;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSArray *transcriptAlignments;
@property (copy, nonatomic) NSArray *availableLanguageOptions;
@property (copy, nonatomic) NSArray *currentLanguageOptions;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (copy, nonatomic) NSString *ancestorIdentifier;
@property (copy, nonatomic) NSString *associatedParticipantIdentifier;
@property (copy, nonatomic) NSString *queueIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) MRArtwork *artwork;
@property (retain, nonatomic) NSArray *availableArtworkFormats;
@property (retain, nonatomic) NSArray *availableRemoteArtworkFormats;
@property (retain, nonatomic) NSArray *availableAnimatedArtworkFormats;
@property (retain, nonatomic) NSDictionary *artworks;
@property (retain, nonatomic) NSDictionary *remoteArtworks;
@property (retain, nonatomic) NSDictionary *animatedArtworkPreviewFrames;
@property (retain, nonatomic) NSDictionary *animatedArtworks;
@property (readonly, nonatomic) MRContentItem *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;

+ (id)extractedIdentifierFromNowPlayingInfo:(id)a0;
+ (id)animatedArtworkItemIdentifierFromSourceIdentifier:(id)a0;
+ (id)mergeContentItems:(id)a0;

- (BOOL)isEffectivelyEqual:(id)a0;
- (id)protobufWithEncoding:(long long)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithNowPlayingInfo:(id)a0;
- (void)setNowPlayingInfo:(id)a0 policy:(unsigned char)a1 request:(id)a2;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
