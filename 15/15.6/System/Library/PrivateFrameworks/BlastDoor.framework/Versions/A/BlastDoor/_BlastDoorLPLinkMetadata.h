@class NSURL, _BlastDoorLPVideoMetadata, _BlastDoorLPARAssetMetadata, _BlastDoorLPAudioMetadata, NSItemProvider, _BlastDoorLPARAsset, _BlastDoorLPPlatformColor, _BlastDoorLPAudio, NSString, _BlastDoorLPSpecializationMetadata, _BlastDoorLPImageMetadata, _BlastDoorLPImage, NSArray, _BlastDoorLPVideo, _SWCollaborationMetadata, _BlastDoorLPIconMetadata;

@interface _BlastDoorLPLinkMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) unsigned int version;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSURL *relatedURL;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *creatorFacebookProfile;
@property (copy, nonatomic) NSString *creatorTwitterUsername;
@property (copy, nonatomic) NSString *twitterCard;
@property (nonatomic) char usesActivityPub;
@property (copy, nonatomic) NSString *appleContentID;
@property (copy, nonatomic) NSString *appleSummary;
@property (copy, nonatomic) _BlastDoorLPPlatformColor *themeColor;
@property (retain, nonatomic) _BlastDoorLPARAsset *arAsset;
@property (retain, nonatomic) _BlastDoorLPARAssetMetadata *arAssetMetadata;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (retain, nonatomic) _BlastDoorLPIconMetadata *iconMetadata;
@property (retain, nonatomic) _BlastDoorLPImage *image;
@property (copy, nonatomic) NSArray *alternateImages;
@property (copy, nonatomic) NSArray *contentImages;
@property (copy, nonatomic) NSArray *contentImagesMetadata;
@property (retain, nonatomic) _BlastDoorLPImageMetadata *imageMetadata;
@property (retain, nonatomic) _BlastDoorLPVideo *video;
@property (retain, nonatomic) _BlastDoorLPVideoMetadata *videoMetadata;
@property (retain, nonatomic) _BlastDoorLPAudio *audio;
@property (retain, nonatomic) _BlastDoorLPAudioMetadata *audioMetadata;
@property (copy, nonatomic) NSArray *arAssets;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *availableContentImages;
@property (copy, nonatomic) NSArray *videos;
@property (copy, nonatomic) NSArray *streamingVideos;
@property (copy, nonatomic) NSArray *audios;
@property (copy, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (copy, nonatomic) _BlastDoorLPSpecializationMetadata *specialization;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSItemProvider *iconProvider;
@property (retain, nonatomic) NSItemProvider *imageProvider;
@property (retain, nonatomic) NSItemProvider *videoProvider;
@property (retain, nonatomic) NSURL *remoteVideoURL;

+ (id)metadataWithDataRepresentation:(id)a0;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)_initWithDictionary:(id)a0;
- (void)_copyPropertiesFrom:(id)a0 onlyUpgradeFields:(char)a1;
- (void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)a0;

@end
