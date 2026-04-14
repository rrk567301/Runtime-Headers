@interface CoreHapticsTools.CHTTimelineLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timelineLayer;
    void /* unknown type, empty encoding */ leadingLabel;
    void /* unknown type, empty encoding */ trailingLabel;
    void /* unknown type, empty encoding */ markedDurationTriangle;
    void /* unknown type, empty encoding */ markedDurationLabel;
    void /* unknown type, empty encoding */ timelineDivisionLabels;
    void /* unknown type, empty encoding */ timelineTextAlignment;
    void /* unknown type, empty encoding */ rightLabelCushion;
    void /* unknown type, empty encoding */ labelFont;
    void /* unknown type, empty encoding */ _maximumFractionDigits;
    void /* unknown type, empty encoding */ _markedDuration;
    void /* unknown type, empty encoding */ _markedDurationTriangleSize;
    void /* unknown type, empty encoding */ _divisions;
    void /* unknown type, empty encoding */ _subdivisions;
    void /* unknown type, empty encoding */ _divisionLength;
    void /* unknown type, empty encoding */ _subdivisionLength;
    void /* unknown type, empty encoding */ _shouldDrawBaseline;
    void /* unknown type, empty encoding */ timelineLabelSpacing;
    void /* unknown type, empty encoding */ _lineThickness;
    void /* unknown type, empty encoding */ timeLabelsNeedLayout;
}

@property (nonatomic) BOOL masksToBounds;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;

@end
