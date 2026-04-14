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

- (void)setActive:(BOOL)a0;
- (BOOL)isActive;
- (void)setViewController:(id)a0;
- (id)initWithType:(long long)a0;
- (unsigned long long)status;
- (id)viewController;
- (id)description;
- (void)activate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (void)deactivate;
- (id)touches;
- (id)CAContext;
- (void)dealloc;
- (struct __DFRTouchBar { } *)DFRTouchBar;
- (double)escapeKeyPaddingForCloseButton:(BOOL)a0;
- (struct __DFRElement { } *)DFRElement;
- (void)dim;
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
