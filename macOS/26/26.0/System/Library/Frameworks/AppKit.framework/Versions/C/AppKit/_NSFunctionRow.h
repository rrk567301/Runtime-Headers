@class NSLayoutXAxisAnchor, NSViewController, NSDictionary, NSFunctionRowBackgroundColorView, NSLayoutConstraint, _NSFunctionRowPanel;

@interface _NSFunctionRow : NSFunctionRow {
    NSViewController *_viewController;
    struct __DFRElement { } *_DFRElement;
    NSDictionary *_attributes;
    _NSFunctionRowPanel *_window;
    NSFunctionRowBackgroundColorView *_rootView;
    NSLayoutXAxisAnchor *_visualCenterXAnchor;
    NSLayoutConstraint *_rootWidth;
    NSLayoutConstraint *_rootHeight;
    NSLayoutConstraint *_rootVisualCenterX;
    unsigned long long _status;
}

- (id)viewController;
- (id)initWithType:(long long)a0;
- (void)dealloc;
- (void)setActive:(BOOL)a0;
- (id)touches;
- (id)CAContext;
- (BOOL)isActive;
- (void)setViewController:(id)a0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)description;
- (unsigned long long)status;
- (void)deactivate;
- (void)activate;
- (struct __DFRTouchBar { } *)DFRTouchBar;
- (void)dim;
- (struct __DFRElement { } *)DFRElement;
- (double)escapeKeyPaddingForCloseButton:(BOOL)a0;
- (id)_dumpLayer;
- (void)_setStatus:(unsigned long long)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilitySizeAttribute;
- (double)closeButtonPadding;
- (void)dismissSystemModal;
- (id)initWithDFRElementAttributes:(id)a0;
- (void)minimizeSystemModal;
- (void)presentSystemModalWithSystemTrayIdentifier:(id)a0;
- (BOOL)requiresCompactLayout;
- (id)visualCenterXAnchor;
- (BOOL)wantsEscKeyOverrides;

@end
