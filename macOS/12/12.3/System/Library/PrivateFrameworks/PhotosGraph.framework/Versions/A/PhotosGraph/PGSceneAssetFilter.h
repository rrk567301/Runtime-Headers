@class NSString, NSDictionary, NSSet;
@protocol CLSClassificationBasedSignalModel;

@interface PGSceneAssetFilter : NSObject <PGAssetFilter> {
    char *_typeOfSceneClassification;
    double *_indexedConfidenceThresholdOfScenes;
    BOOL _requireDominantPositiveScenes;
    id<CLSClassificationBasedSignalModel> _positiveSceneCustomSignalModel;
    id<CLSClassificationBasedSignalModel> _positiveDominantSceneCustomSignalModel;
}

@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *confidenceThresholdByPositiveSceneIdentifiers;
@property (retain, nonatomic) NSDictionary *confidenceThresholdBySecondaryPositiveSceneIdentifiers;
@property (retain, nonatomic) NSDictionary *confidenceThresholdByNegativeSceneIdentifiers;
@property (retain, nonatomic) NSDictionary *confidenceThresholdByPositiveDominantSceneIdentifiers;
@property (retain, nonatomic) NSSet *positiveSemDevSceneIdentifiers;
@property (readonly, nonatomic) NSSet *positiveScenes;
@property (readonly, nonatomic) NSSet *secondaryPositiveScenes;
@property (readonly, nonatomic) NSSet *positiveDominantScenes;
@property (readonly, nonatomic) NSSet *positiveSemDevScenes;
@property (readonly, nonatomic) NSSet *negativeScenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)filteredAssetsFromAssets:(id)a0;
- (BOOL)passesWithAsset:(id)a0;
- (id)initWithPositiveScenes:(id)a0 negativeScenes:(id)a1;
- (id)initWithPositiveScenes:(id)a0 positiveSceneCustomSignalModel:(id)a1 secondaryPositiveScenes:(id)a2 positiveDominantScenes:(id)a3 positiveDominantSceneCustomSignalModel:(id)a4 positiveSemDevScenes:(id)a5 negativeScenes:(id)a6;
- (id)_consolidatedConfidenceThresholdBySceneIdentifiers:(id)a0 customSignalModel:(id)a1;
- (void)_buildIndexWithConfidenceThresholds:(id)a0 sceneClassificationType:(char)a1;
- (BOOL)label:(id)a0 isSemDevClassificationWithIdentifier:(unsigned int *)a1;
- (BOOL)validateSceneNames:(id)a0;

@end
