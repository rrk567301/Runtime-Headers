@class MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUPlaceSectionHeaderView, NSLayoutGuide, MULinkView;

@interface MUPlaceSectionView : NSView <MUActivityObserving> {
    MUPlaceSectionHeaderView *_headerView;
    NSLayoutGuide *_contentLayoutGuide;
    MULinkView *_footerView;
}

@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *headerViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *footerViewModel;
@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insetButtonSectionViewforContentView:(id)a0;
+ (id)insetPlatterSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;
+ (id)insetTextSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)beginAnimatingActivityIndicator;
- (void)_setupSubviews;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)configureWithSectionController:(id)a0;
- (void)_updateForContentSizeChange;
- (void)attachViewToContentView:(id)a0;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1 sectionHeaderViewModel:(id)a2 sectionFooterViewModel:(id)a3;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;
- (void)setHeaderAXIdentifierWithBaseString:(id)a0;

@end
