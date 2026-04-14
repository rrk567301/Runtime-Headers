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

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isActive;
- (unsigned long long)status;
- (void)activate;
- (id)initWithType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setActive:(BOOL)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)deactivate;
- (void)setViewController:(id)a0;
- (id)visualCenterXAnchor;
- (BOOL)wantsEscKeyOverrides;
- (const struct __DFRElement { } *)DFRElement;
- (id)touches;
- (const struct __DFRTouchBar { } *)DFRTouchBar;
- (double)escapeKeyPaddingForCloseButton:(BOOL)a0;
- (double)closeButtonPadding;
- (id)viewController;
- (id)CAContext;
- (id)_dumpLayer;
- (void)dim;
- (id)initWithDFRElementAttributes:(id)a0;
- (BOOL)requiresCompactLayout;
- (void)_setStatus:(unsigned long long)a0;
- (void)presentSystemModalWithSystemTrayIdentifier:(id)a0;
- (void)dismissSystemModal;
- (void)minimizeSystemModal;

@end
