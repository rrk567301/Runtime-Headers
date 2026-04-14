@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis *_axis;
}

@property (readonly, nonatomic) TSCH3DAxisLabelKind *kind;

+ (id)enumeratorWithAxis:(id)a0 kind:(id)a1;

- (int)labelPosition;
- (void)update;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)string;
- (BOOL)shouldRender;
- (id)initWithAxis:(id)a0 kind:(id)a1;
- (id)stringForLabelResources:(id)a0;

@end
