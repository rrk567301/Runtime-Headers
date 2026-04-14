@class JUTraitCollection;

@interface GameCenterUI.PageGrid : NSObject <JetUI.JetTraitEnvironment> {
    void /* unknown type, empty encoding */ baseColumnCount;
    void /* unknown type, empty encoding */ maxBaseColumnCount;
    void /* unknown type, empty encoding */ baseColumnDelta;
}

@property (class, nonatomic, readonly) double baseColumnWidth;

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } containerSize;
@property (nonatomic, readonly) double interColumnSpacing;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } centeringInsets;

- (id)init;
- (void).cxx_destruct;
- (void)jet_traitCollectionDidChange:(id)a0;
- (double)columnWidthWithSpanningColumns:(long long)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })centeringEdgeInsetsWithColumnCount:(long long)a0;
- (struct CGSize { double x0; double x1; })componentMeasuringSizeWithSpanningColumns:(long long)a0;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 baseColumnDelta:(long long)a1 maxBaseColumnCount:(long long)a2 traitCollection:(id)a3;

@end
