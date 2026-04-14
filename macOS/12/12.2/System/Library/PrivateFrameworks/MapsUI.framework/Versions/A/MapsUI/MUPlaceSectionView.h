@class MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderView, MUPlaceSectionHeaderViewModel, NSView, NSLayoutGuide;

@interface MUPlaceSectionView : NSView {
    MUPlaceSectionHeaderView *_headerView;
    NSLayoutGuide *_contentLayoutGuide;
    NSView *_footerView;
    BOOL _alwaysHideSeparators;
}

@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *headerViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *footerViewModel;
@property (readonly, nonatomic) long long style;

+ (id)cardShadowSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;
+ (id)cardShadowSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_setupConstraints;
- (void)configureWithSectionController:(id)a0;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1 sectionHeaderViewModel:(id)a2 sectionFooterViewModel:(id)a3;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1;
- (void)attachViewToContentView:(id)a0;

@end
