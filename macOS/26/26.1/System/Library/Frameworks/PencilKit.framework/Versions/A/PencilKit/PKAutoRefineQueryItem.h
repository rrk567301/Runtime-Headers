@class CHTokenizedTextResult, NSIndexSet, NSArray, NSLocale;

@interface PKAutoRefineQueryItem : NSObject {
    struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct CGRect *__cap_; } _boundingBoxForTokenColumn;
    struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct CGRect *__cap_; } _rotatedBoundingBoxForTokenColumn;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } _writingOrientationAngleForTokenColumn;
}

@property (copy, nonatomic) NSIndexSet *refinedTokenColumns;
@property (readonly, copy, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *strokesUUIDs;
@property (copy, nonatomic) NSIndexSet *refinableStrokes;
@property (readonly, copy, nonatomic) NSLocale *locale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForTextResultsColumnAtIndex:(long long)a0;
- (id)initWithQueryItem:(id)a0 usingStrokeProvider:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rotatedBoundsForTextResultsColumnAtIndex:(long long)a0;
- (double)writingOrientationAngleForTextResultsColumnAtIndex:(long long)a0;

@end
