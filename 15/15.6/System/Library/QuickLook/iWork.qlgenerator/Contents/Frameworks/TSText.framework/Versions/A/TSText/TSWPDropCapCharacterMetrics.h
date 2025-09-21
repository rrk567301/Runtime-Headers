@class NSMutableArray;

@interface TSWPDropCapCharacterMetrics : NSObject {
    NSMutableArray *_metricData;
}

@property (readonly, nonatomic) char isRightToLeft;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) char isVertical;
@property (readonly, nonatomic) double baseline;

- (id)description;
- (void).cxx_destruct;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)adjustMetricsForWidth:(double)a0;
- (id)initWithCharacterCount:(unsigned long long)a0 isRightToLeft:(char)a1 isVertical:(char)a2 baseline:(double)a3;
- (id)metricsForCharIndex:(unsigned long long)a0;

@end
