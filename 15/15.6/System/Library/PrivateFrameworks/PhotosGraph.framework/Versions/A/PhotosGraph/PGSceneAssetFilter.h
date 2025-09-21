@class NSString, NSSet, CLSSceneConfidenceThresholdHelper, NSMutableDictionary;

@interface PGSceneAssetFilter : NSObject <PGAssetFilter> {
    CLSSceneConfidenceThresholdHelper *_positiveScenesHelper;
    CLSSceneConfidenceThresholdHelper *_secondaryPositiveScenesHelper;
    CLSSceneConfidenceThresholdHelper *_negativeScenesHelper;
    CLSSceneConfidenceThresholdHelper *_positiveDominantScenesHelper;
    NSMutableDictionary *_confidenceThresholdByPositiveSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary *_confidenceThresholdBySecondaryPositiveSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary *_confidenceThresholdByNegativeSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary *_confidenceThresholdByPositiveDominantSceneIdentifierBySceneModelIdentifier;
    char *_typeOfSceneClassification;
    NSMutableDictionary *_indexedConfidenceThresholdOfScenesBySceneModelIdentifier;
    char _requireDominantPositiveScenes;
    id /* block */ _positiveSceneCustomSignalModelBlock;
    id /* block */ _positiveDominantSceneCustomSignalModelBlock;
    char _useEntityNet;
}

@property (class, readonly, nonatomic) NSString *name;

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

+ (char)supportsSecureCoding;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_allSceneNamesAreValid:(id)a0;
- (void)_buildIndexWithConfidenceThresholds:(id)a0 sceneClassificationType:(char)a1 curationModel:(id)a2;
- (void)_commonInitWithPositiveScenes:(id)a0 positiveSceneCustomSignalModelBlock:(id /* block */)a1 secondaryPositiveScenes:(id)a2 positiveDominantScenes:(id)a3 positiveDominantSceneCustomSignalModelBlock:(id /* block */)a4 positiveSemDevScenes:(id)a5 negativeScenes:(id)a6 sceneTaxonomy:(id)a7 useEntityNet:(char)a8;
- (id)_consolidatedConfidenceThresholdBySceneIdentifiers:(id)a0 customSignalModel:(id)a1;
- (char)_validateSceneNames:(id)a0 withSceneTaxonomy:(id)a1;
- (id)confidenceThresholdByNegativeSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByPositiveDominantSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByPositiveSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdBySecondaryPositiveSceneIdentifierWithCurationModel:(id)a0;
- (id)filteredAssetsFromAssets:(id)a0;
- (id)initForEntityNetWithSceneNames:(id)a0 negativeScenes:(id)a1 sceneTaxonomy:(id)a2;
- (id)initForEntityNetWithSceneNames:(id)a0 positiveSceneCustomSignalModelBlock:(id /* block */)a1 secondaryPositiveScenes:(id)a2 positiveDominantScenes:(id)a3 positiveDominantSceneCustomSignalModelBlock:(id /* block */)a4 positiveSemDevScenes:(id)a5 negativeScenes:(id)a6 sceneTaxonomy:(id)a7;
- (id)initWithPositiveScenes:(id)a0 negativeScenes:(id)a1 sceneTaxonomy:(id)a2;
- (id)initWithPositiveScenes:(id)a0 positiveSceneCustomSignalModelBlock:(id /* block */)a1 secondaryPositiveScenes:(id)a2 positiveDominantScenes:(id)a3 positiveDominantSceneCustomSignalModelBlock:(id /* block */)a4 positiveSemDevScenes:(id)a5 negativeScenes:(id)a6 sceneTaxonomy:(id)a7;
- (char)label:(id)a0 isSemDevClassificationWithIdentifier:(unsigned int *)a1;
- (char)passesWithAsset:(id)a0;

@end
