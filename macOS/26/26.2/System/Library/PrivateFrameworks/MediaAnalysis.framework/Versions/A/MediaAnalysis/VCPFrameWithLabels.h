@class NSString, NSMutableArray, NSMutableDictionary;

@interface VCPFrameWithLabels : NSObject {
    NSMutableArray *_embeddingRepresentativeIDs;
    NSMutableDictionary *_sceneIDsWithConfidence;
    NSMutableDictionary *_actionTypeWithConfidence;
    NSMutableArray *_faceIDs;
    NSMutableArray *_animalIDs;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (nonatomic) float frameScore;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) float distanceFromLast;
@property (retain, nonatomic) NSString *thumbnailID;

- (void)mergeWith:(id)a0;
- (void).cxx_destruct;
- (id)faceIDs;
- (id)filterSceneSet:(id)a0;
- (id)actionTypeWithConfidence;
- (void)addAnimalIDs:(id)a0;
- (void)addFaceIDs:(id)a0;
- (id)animalIDs;
- (unsigned long long)compareWith:(id)a0;
- (id)embeddingRepresentativeIDs;
- (unsigned long long)getActionMergeType:(id)a0;
- (unsigned long long)getSceneMergeType:(id)a0;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 score:(float)a1;
- (BOOL)isAnimalMergableWith:(id)a0;
- (BOOL)isEmbeddingMergableWith:(id)a0;
- (BOOL)isFaceMergableWith:(id)a0;
- (id)sceneIDsWithConfidence;
- (void)setActionTypeWithConfidence:(id)a0;
- (void)setEmbeddingRepresentativeIDs:(id)a0 embeddingArray:(id)a1;
- (void)setSceneIDsWithConfidence:(id)a0;

@end
