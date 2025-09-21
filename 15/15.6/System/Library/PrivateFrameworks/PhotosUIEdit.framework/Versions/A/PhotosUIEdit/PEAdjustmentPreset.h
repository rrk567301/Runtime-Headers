@class NSDictionary, NUComposition;

@interface PEAdjustmentPreset : PEEditAction

@property (retain, nonatomic) NUComposition *composition;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;
@property (readonly, nonatomic) char isAutoEnhanceEnabled;
@property (readonly, nonatomic) long long autoType;

+ (void)sanitizeCompositionController:(id)a0;

- (void).cxx_destruct;
- (id)initWithPropertyListDictionary:(id)a0;
- (long long)actionType;
- (id)analyticsPayload;
- (char)_isCinematicEditSource:(id)a0;
- (char)_isSpatialAudioEditSource:(id)a0;
- (id)_serializeCompositionController:(id)a0 includeSidecar:(char)a1;
- (void)applyToCompositionController:(id)a0 asset:(id)a1 editSource:(id)a2 completion:(id /* block */)a3;
- (void)applyToCompositionController:(id)a0 asset:(id)a1 editSource:(id)a2 invalidAdjustmentKeys:(id)a3 completion:(id /* block */)a4;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithCompositionController:(id)a0 asset:(id)a1;
- (id)initWithCompositionController:(id)a0 asset:(id)a1 additionalSerializationEntries:(id)a2 includeSidecar:(char)a3;

@end
