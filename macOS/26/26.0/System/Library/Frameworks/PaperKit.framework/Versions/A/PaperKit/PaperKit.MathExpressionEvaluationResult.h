@class NSString, NSArray, NSNumber;

@interface PaperKit.MathExpressionEvaluationResult : NSObject <CHMathExpressionEvaluationResult> {
    void /* function */ string;
    void /* unknown type, empty encoding */ drawing;
}

@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, retain) NSNumber *strokeGroupIdentifier;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
