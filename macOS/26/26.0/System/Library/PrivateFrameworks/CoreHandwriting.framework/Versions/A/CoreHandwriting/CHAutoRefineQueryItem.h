@class CHTokenizedTextResult, NSArray, NSIndexSet, CHRecognitionSessionAutoRefineResult, NSLocale, NSDictionary;

@interface CHAutoRefineQueryItem : NSObject {
    CHRecognitionSessionAutoRefineResult *_autoRefineResult;
    NSDictionary *_orientationAnglePerColumn;
    NSDictionary *_rotatedBoundsPerColumn;
}

@property (readonly, copy, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSIndexSet *refinedTokenColumns;
@property (readonly, nonatomic) NSLocale *locale;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithAutoRefineResult:(id)a0;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rotatedColumnBounds:(long long)a0;
- (double)writingOrientationAngleAtColumn:(long long)a0;

@end
