@class NSString, NSButton, FI_TIconCollectionGroupHeaderView;

@interface FIIconHeaderView : NSView <NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate> {
    FI_TIconCollectionGroupHeaderView *_headerView;
}

@property (copy) NSString *titleStr;
@property unsigned long long itemCount;
@property (getter=isCollapsed) BOOL collapsed;
@property (getter=isCollapseButtonHidden) BOOL collapseButtonHidden;
@property (getter=isCollapseButtonHiddenManually) BOOL collapseButtonHiddenManually;
@property (getter=isFloating) BOOL floating;
@property (weak) NSButton *sectionCollapseButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)itemCount;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)setCollapsed:(BOOL)a0;
- (void)setFloating:(BOOL)a0;
- (void)setItemCount:(unsigned long long)a0;
- (void)initCommon;
- (void)setTitleStr:(id)a0;
- (id)titleStr;
- (void)setCollapseButtonHidden:(BOOL)a0;
- (void)setCollapseButtonPressedBlock:(id /* block */)a0;

@end
