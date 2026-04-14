@class NSString, AlertDialogView;

@interface AlertDialogViewOriginMessageAccessibilityHelper : NSObject <NSAccessibilityStaticText> {
    AlertDialogView *_parentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityParent;
- (id)initWithAlertDialogView:(id)a0;

@end
