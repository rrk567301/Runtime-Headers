@class NSArray, NSMutableArray;

@interface VCPVideoThumbnailAnalyzer : NSObject {
    NSMutableArray *_pickedThumbnails;
    NSArray *_featureResults;
    NSArray *_existingThumbnails;
}

+ (int)getMaxNumThumbnailsPerMin;
+ (BOOL)isContextualThumbnailEnabled;

- (void).cxx_destruct;
- (void)addFrameToThumbnails:(id)a0;
- (id)addThumbnailIdsToFaceAnimalPrint:(id)a0 isFace:(BOOL)a1;
- (id)addThumbnailIdsToHumanActionClassification:(id)a0;
- (id)addThumbnailIdsToSummarizedEmbedding:(id)a0;
- (id)addThumbnailToResults:(id)a0 withPrivateResults:(id)a1 videoRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 assetMaxNumThumbnails:(int)a3;
- (float)computeContentScore:(float)a0 faceScore:(float)a1 humanActionScore:(float)a2;
- (float)computeFaceScore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 faceResults:(id)a1 penaltyScore:(float *)a2;
- (float)distanceBetweenFrames:(float)a0 keyFrame2:(float)a1;
- (id)findThumbnailID:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)getKeyFrameResults:(id)a0;
- (id)initWithExistingThumbnails:(id)a0;
- (void)reduceNumThumbnails:(int)a0;
- (id)sceneIdsToThumbnailIdsMapping:(id)a0;

@end
