@class NSDate, NSString, NSURL, NSData, PFMetadata, NSImage, PXFileBackedAssetDescription, CLLocation, NSNumber;

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset> {
    PFMetadata *_metadata;
    PXFileBackedAssetDescription *_description;
    NSString *_fileBackedUUID;
}

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSImage *previewImage;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) char isAnimatedImage;
@property (readonly, nonatomic) char canPlayPhotoIris;
@property (readonly, nonatomic) char canPlayLoopingVideo;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic, getter=isFavorite) char favorite;
@property (readonly, nonatomic) char representsBurst;
@property (readonly, nonatomic) char isInCloud;
@property (readonly, nonatomic) char isInSharedLibrary;
@property (readonly, nonatomic) char isEligibleForAutoPlayback;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceAreaRect;
@property (readonly, nonatomic) float audioScore;
@property (readonly, nonatomic) char hasPeopleSceneMidOrGreaterConfidence;
@property (readonly, nonatomic) long long originalFileSize;
@property (readonly, nonatomic) char isSpatialMedia;
@property (readonly, nonatomic) char isSpatialPresentation;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoVideoDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoStillDisplayTime;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) unsigned short playbackVariation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) char isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } positionOffset;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) char cloudIsDeletable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithDescription:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0;
- (long long)isContentEqualTo:(id)a0;
- (void)_loadFileMetadataIfNeeded;
- (id)initWithURL:(id)a0 previewImage:(id)a1;
- (char)isEqualToFileBackedAsset:(id)a0;
- (char)isPartOfStack;
- (double)weightUsingCriterion:(long long)a0;

@end
