@interface VCPPhotosFaceProcessingContext : NSObject

@property float faceMergeFaceprintDistanceThreshold;
@property int processingVersion;
@property int skipGallerySyncing;

+ (id)contextWithPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;

@end
