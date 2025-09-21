@class NSString, PLPTPAssetHandle, UTType, NSData, NSNumber;

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying>

@property (readonly, copy, nonatomic) PLPTPAssetHandle *assetHandle;
@property (readonly, copy, nonatomic) NSString *cacheKey;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *createdFilename;
@property (readonly, nonatomic, getter=isDeleted) char deleted;
@property (readonly, copy, nonatomic) NSString *originalFilename;
@property (readonly, copy, nonatomic) NSString *fullDirectoryPath;
@property (readonly, nonatomic, getter=isExifAvailable) char exifAvailable;
@property (readonly, copy, nonatomic) NSNumber *objectCompressedSize;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly, copy, nonatomic) NSString *originatingAssetID;
@property (readonly, copy, nonatomic) NSNumber *thumbOffset;
@property (readonly, copy, nonatomic) NSNumber *thumbCompressedSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imagePixSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbPixSize;
@property (readonly, nonatomic) long long desiredOrientation;
@property (readonly, copy, nonatomic) NSString *modificationDateString;
@property (readonly, copy, nonatomic) NSString *captureDateString;
@property (readonly, copy, nonatomic) NSString *durationString;
@property (readonly, copy, nonatomic) NSString *locationString;
@property (readonly, copy, nonatomic) NSString *groupUUID;
@property (readonly, copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (readonly, copy, nonatomic) NSString *burstUUID;
@property (readonly, nonatomic, getter=isBurstPicked) char burstPicked;
@property (readonly, nonatomic, getter=isBurstFavorite) char burstFavorite;
@property (readonly, nonatomic, getter=isBurstFirstPicked) char burstFirstPicked;
@property (readonly, nonatomic, getter=isHighFrameRateVideo) char highFrameRateVideo;
@property (readonly, nonatomic, getter=isTimeLapseVideo) char timeLapseVideo;
@property (readonly, copy, nonatomic) NSString *relatedUUID;
@property (readonly, nonatomic) long long conversionGroup;
@property (readonly, nonatomic) unsigned int videoCodec;
@property (readonly, nonatomic) UTType *contentType;
@property (readonly, nonatomic) char isHDR;
@property (readonly, copy, nonatomic) NSData *event;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;
- (id)initWithPTPAsset:(id)a0;

@end
