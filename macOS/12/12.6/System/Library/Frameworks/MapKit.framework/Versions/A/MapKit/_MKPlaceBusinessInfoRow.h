@class NSArray, NSMutableArray, NSLayoutGuide;

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {
    BOOL _needToRecalculateWidth;
    unsigned long long _numberOfColumns;
    NSMutableArray *_labels;
    NSArray *_constraints;
    NSLayoutGuide *_leftColumnGuide;
    NSLayoutGuide *_rightColumnGuide;
    double _width;
}

@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)infoCardThemeChanged;
- (void)_contentSizeDidChange;
- (void)_createConstraints;
- (void)_updateFontAndTextColor:(id)a0;

@end
