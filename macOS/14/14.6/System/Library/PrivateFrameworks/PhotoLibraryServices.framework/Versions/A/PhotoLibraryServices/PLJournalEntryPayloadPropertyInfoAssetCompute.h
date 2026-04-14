@interface PLJournalEntryPayloadPropertyInfoAssetCompute : NSObject <PLJournalEntryPayloadPropertyInfo>

@property (readonly, nonatomic) short stage;
@property (readonly, nonatomic) long long versionType;
@property (readonly, nonatomic) long long sceneAnalysisVersion;
@property (readonly, nonatomic) long long faceAnalysisVersion;
@property (readonly, nonatomic) long long mediaAnalysisVersion;
@property (readonly, nonatomic) long long characterRecognitionVersion;
@property (readonly, nonatomic) long long visualSearchVersion;

+ (void)setShouldExcludeDetectedFaces:(BOOL)a0;
+ (BOOL)shouldExcludeDetectedFaces;

- (id)initWithAsset:(id)a0;
- (id)initWithAnalysisStage:(short)a0;
- (id)initWithAnalysisStage:(short)a0 versionType:(long long)a1;
- (BOOL)shouldApplyWithPayloadProperty:(id)a0 andPayload:(id)a1;
- (BOOL)validForPersistenceWithPayloadProperty:(id)a0 andValue:(id)a1;

@end
