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
- (void)activate;
- (char)isActive;
- (unsigned long long)status;
- (id)initWithType:(long long)a0;
- (struct __DFRElement { } *)DFRElement;
- (id)touches;
- (id)CAContext;
- (struct __DFRTouchBar { } *)DFRTouchBar;
- (void)dim;
- (double)escapeKeyPaddingForCloseButton:(char)a0;
- (id)_dumpLayer;
- (void)_setStatus:(unsigned long long)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (char)accessibilityShouldUseUniqueId;
- (id)accessibilitySizeAttribute;
- (double)closeButtonPadding;
- (void)deactivate;
- (void)dismissSystemModal;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithDFRElementAttributes:(id)a0;
- (void)minimizeSystemModal;
- (void)presentSystemModalWithSystemTrayIdentifier:(id)a0;
- (char)requiresCompactLayout;
- (void)setActive:(char)a0;
- (void)setViewController:(id)a0;
- (id)viewController;
- (id)visualCenterXAnchor;
- (char)wantsEscKeyOverrides;

@end
