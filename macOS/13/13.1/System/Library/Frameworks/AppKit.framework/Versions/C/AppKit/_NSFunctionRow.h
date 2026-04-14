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
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)accessibilityChildrenAttribute;
- (void)deactivate;
- (void)setActive:(BOOL)a0;
- (id)touches;
- (id)viewController;
- (void)setViewController:(id)a0;
- (id)_dumpLayer;
- (id)initWithDFRElementAttributes:(id)a0;
- (const struct __DFRElement { } *)DFRElement;
- (const struct __DFRTouchBar { } *)DFRTouchBar;
- (BOOL)wantsEscKeyOverrides;
- (BOOL)requiresCompactLayout;
- (double)closeButtonPadding;
- (double)escapeKeyPaddingForCloseButton:(BOOL)a0;
- (void)_setStatus:(unsigned long long)a0;
- (void)dim;
- (void)presentSystemModalWithSystemTrayIdentifier:(id)a0;
- (void)dismissSystemModal;
- (void)minimizeSystemModal;
- (id)visualCenterXAnchor;
- (id)CAContext;

@end
