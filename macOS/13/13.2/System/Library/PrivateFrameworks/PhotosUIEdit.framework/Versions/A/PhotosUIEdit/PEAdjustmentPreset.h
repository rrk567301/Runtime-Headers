@class NSDictionary, NUComposition;

@interface PEAdjustmentPreset : PEEditAction {
    NUComposition *_composition;
}

@property (readonly, nonatomic) NUComposition *composition;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;
@property (readonly, nonatomic) BOOL isAutoEnhanceEnabled;
@property (readonly, nonatomic) BOOL needsGeometryAdjustments;
@property (readonly, nonatomic) long long autoType;

+ (void)sanitizeCompositionController:(id)a0;

- (void).cxx_destruct;
- (long long)actionType;
- (id)analyticsPayload;
- (id)initWithPropertyListDictionary:(id)a0;
- (id)initWithCompositionController:(id)a0;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;
- (id)_serializeCompositionController:(id)a0;
- (BOOL)_isCinematicEditSource:(id)a0;
- (void)applyToCompositionController:(id)a0 editSource:(id)a1 completion:(id /* block */)a2;
- (void)applyToCompositionController:(id)a0 invalidAdjustmentKeys:(id)a1 completion:(id /* block */)a2;

@end
