@class CHBottomUpStrokeGroupingStrategy, NSArray, CHTilingManager;
@protocol CHDocumentLayoutAnalyzing, CHStrokeProvider;

@interface CHDocumentLayoutAnalysisManager : NSObject {
    CHTilingManager *_tilingManager;
    CHBottomUpStrokeGroupingStrategy *_leftToRightBottomUpStrategy;
    CHBottomUpStrokeGroupingStrategy *_rightToLeftBottomUpStrategy;
    NSArray *_scriptCodeMap;
    long long _maxNumStrokesPerTile;
}

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) id<CHDocumentLayoutAnalyzing> documentLayoutAnalyzer;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 documentLayoutAnalyzer:(id)a1 locales:(id)a2;
- (id)subjectStrokeGroupingResult:(id)a0 allOrderedStrokeIdentifiers:(id)a1 lastGroupingResult:(id)a2 lastDocumentLayoutAnalysisResult:(id)a3 lastStrokeClassificationResult:(id)a4 cancellationBlock:(id /* block */)a5;
- (id)updatedStrokeClassificationResult:(id)a0 subjectStrokeIdentifiers:(id)a1 lastStrokeClassificationResult:(id)a2 lastTilingResult:(id)a3 lastDocumentLayoutAnalysisResult:(id)a4 lastGroupingResult:(id)a5 outTilingResult:(id *)a6 outDocumentLayoutAnalysisResult:(id *)a7 outStrokeGroupingResult:(id *)a8 shouldRebuildResult:(BOOL)a9 cancellationBlock:(id /* block */)a10;

@end
