@class NSMutableDictionary, CHDrawing;

@interface CHRecognizerInferenceCache : NSObject {
    CHDrawing *_lastDrawing;
    NSMutableDictionary *_cachedActivationMatrices;
    NSMutableDictionary *_cachedStrokeIndexMappings;
    NSMutableDictionary *_cachedStrokeEndings;
    NSMutableDictionary *_cachedPrincipalPoints;
}

- (void)clearCache;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)cacheActivationMatrix:(id)a0 strokeIndexMapping:(id)a1 strokeEndings:(id)a2 principalPoints:(id)a3 drawing:(id)a4 recognitionEngineCachingKey:(id)a5;
- (id)retrieveActivationMatrixForDrawing:(id)a0 recognitionEngineCachingKey:(id)a1 outStrokeIndexMapping:(id *)a2 outStrokeEndings:(id *)a3 outPrincipalPoints:(id *)a4;

@end
