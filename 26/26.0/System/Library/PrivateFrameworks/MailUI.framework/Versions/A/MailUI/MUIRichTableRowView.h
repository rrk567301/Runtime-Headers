@class NSString, CALayer, NSTableView;
@protocol MUIRichTableRowViewDelegate;

@interface MUIRichTableRowView : NSTableRowView <MUIReusableIdentifiable>

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (nonatomic) BOOL shouldDrawSeparator;
@property (retain, nonatomic) CALayer *priorityBorderLayer;
@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) id<MUIRichTableRowViewDelegate> delegate;
@property (nonatomic) unsigned long long groupingStyle;
@property (nonatomic) unsigned long long priorityBorderStyle;
@property (nonatomic) BOOL hideSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundColor;
- (id)separatorColor;
- (void)updateLayer;
- (void)setSelected:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEmphasized:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)drawsSeparator;
- (BOOL)wantsUpdateLayer;
- (void)_updateGrouping;
- (id)_nextRow;
- (id)_previousRow;
- (void)_richTableRowViewCommonInit;
- (void)_updateBorderLayers;
- (void)_updateSeparators;

@end
