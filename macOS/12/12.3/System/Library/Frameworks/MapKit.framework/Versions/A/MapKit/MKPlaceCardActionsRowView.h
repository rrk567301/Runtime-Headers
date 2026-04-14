@class NSArray;
@protocol _MKPlaceViewControllerDelegate, MKPlaceActionManagerProtocol;

@interface MKPlaceCardActionsRowView : NSView <MKActionRowItemViewDelegate> {
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    unsigned long long _style;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly, nonatomic) NSArray *actionButtons;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (void)createConstraints;
- (void)infoCardThemeChanged;
- (void)actionRowSelected:(id)a0;
- (void)createActions;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (id)_buildModuleForAnalytics;
- (int)_buttonItemTypeFromActionItem:(id)a0;
- (void)invalidateActionButtons;

@end
