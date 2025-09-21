@class NSImageView, NSLayoutConstraint, NSView, OBTemplatePartBulletListItem, NSStackView, NSMutableArray;

@interface OBTemplatePartBulletExpandableListItem : NSView

@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSStackView *expandableStack;
@property (nonatomic) char expanded;
@property (nonatomic) char showsBackground;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSView *separatorView;
@property (retain, nonatomic) NSImageView *chevronImageView;
@property (retain, nonatomic) OBTemplatePartBulletListItem *listItem;
@property (retain, nonatomic) NSLayoutConstraint *stackViewToTrailingEdgeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *chevronViewWidthConstraint;

- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)updateLayer;
- (void)addSublistItem:(id)a0;
- (id)_chevronImage;
- (void)_updateListItemChevronPaddingForImage:(id)a0;
- (void)addSublistItems:(id)a0;
- (id)initWithListItem:(id)a0 showsBackground:(char)a1;

@end
