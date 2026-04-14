@class NSString, NSMutableDictionary;

@interface PXCameraAsset : NSObject

@property (retain, nonatomic) NSMutableDictionary *icAssetDict;
@property (copy, nonatomic) NSString *plRelatedUUID;
@property (nonatomic) unsigned long long icAssetHandle;
@property (readonly) unsigned long long unsignedIntegerValue;

- (void)dealloc;
- (double)duration;
- (unsigned long long)fileSize;
- (id)filename;
- (BOOL)hasThumbnail;
- (id)modificationDate;
- (unsigned long long)orientation;
- (unsigned long long)thumbnailSize;
- (id)groupUUID;
- (id)originalFilename;
- (BOOL)timeLapse;
- (BOOL)burstFavorite;
- (BOOL)burstPicked;
- (id)burstUUID;
- (id)createdFilename;
- (BOOL)firstPicked;
- (BOOL)highFramerate;
- (id)originatingAssetID;
- (id)relatedUUID;
- (id)spatialOverCaptureGroupID;
- (id)assetDictionary;
- (unsigned long long)conversionGroup;
- (struct CGSize { double x0; double x1; })mediaDimensions;
- (id)captureDate;
- (long long)compareCameraAsset:(id)a0;
- (id)initWithPXCameraAssetDictionary:(id)a0;
- (struct CGSize { double x0; double x1; })thumbnailDimensions;

@end
