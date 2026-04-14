@class NSString, NSArray, NSDictionary;

@interface AVAssetPlannerTrackState : NSObject

@property int assemblyTrackID;
@property (copy) NSString *mediaType;
@property BOOL requiresVideoCompression;
@property (copy) NSString *videoCodecType;
@property (copy) NSArray *segmentStates;
@property (copy) NSDictionary *lastCompletedSegmentFinalHDRMetadataGenerationState;

+ (id)emptyState;
+ (id)fromDictionary:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)toDictionary;
- (BOOL)resumableBy:(id)a0;

@end
