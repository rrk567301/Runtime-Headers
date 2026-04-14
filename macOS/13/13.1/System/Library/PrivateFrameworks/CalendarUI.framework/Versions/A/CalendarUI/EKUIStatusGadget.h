@class NSString, EKUIPopUpButton;

@interface EKUIStatusGadget : EKUILabeledGadget <NSMenuDelegate>

@property (retain) EKUIPopUpButton *statusPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (double)baselineOffset;
- (void)menuDidClose:(id)a0;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (void)statusChanged:(id)a0;
- (id)statusImageForStatus:(long long)a0 selected:(BOOL)a1;
- (void)addMenuItemForStatus:(long long)a0 withTitle:(id)a1;

@end
