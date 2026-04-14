@class NSString, _MKUILabel;

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView

@property (retain, nonatomic) _MKUILabel *textBlock;
@property (nonatomic) BOOL constraintsAdded;
@property (copy, nonatomic) NSString *textBlockText;
@property (nonatomic, getter=isTextBlockExpanded) BOOL textBlockExpanded;
@property (copy, nonatomic) id /* block */ textBlockResizedBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)infoCardThemeChanged;

@end
