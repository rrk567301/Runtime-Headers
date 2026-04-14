@interface CoreHapticsTools.CHTTimelineLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timelineLayer;
    void /* unknown type, empty encoding */ leftMarker;
    void /* unknown type, empty encoding */ rightMarker;
    void /* unknown type, empty encoding */ markedDurationTriangle;
    void /* unknown type, empty encoding */ markedDurationMarker;
    void /* unknown type, empty encoding */ timelineMarkers;
    void /* unknown type, empty encoding */ rightLabelCushion;
    void /* unknown type, empty encoding */ timelineLabelFont;
    void /* unknown type, empty encoding */ markedDuration;
    void /* unknown type, empty encoding */ _divisions;
    void /* unknown type, empty encoding */ tickLen;
    void /* unknown type, empty encoding */ timelineColor;
    void /* unknown type, empty encoding */ timelineTextColor;
    void /* unknown type, empty encoding */ timelineMarkedDurationColor;
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
