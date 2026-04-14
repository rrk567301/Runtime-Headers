@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis *_axis;
}

@property (readonly, nonatomic) TSCH3DAxisLabelKind *kind;

+ (id)enumeratorWithAxis:(id)a0 kind:(id)a1;

- (id)string;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)update;
- (int)labelPosition;
- (BOOL)shouldRender;
- (id)stringForLabelResources:(id)a0;
- (id)initWithAxis:(id)a0 kind:(id)a1;

@end
