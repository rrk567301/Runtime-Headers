@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec

@property (retain, nonatomic) PXLabelSpec *titleLabelSpec;
@property (retain, nonatomic) PXLabelSpec *subtitleLabelSpec;
@property (nonatomic) double interLabelSpacing;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double maximumTitleSubtitleHeight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
