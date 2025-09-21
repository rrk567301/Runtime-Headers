@class NSButton, NSString, NSImage;

@interface PXAlternatingButtonHelper : NSObject {
    id _modifierFlagsMonitor;
    char _didCaptureOriginalState;
    SEL _originalAction;
    NSImage *_originalImage;
    NSString *_originalToolTip;
    NSString *_originalAccessibilityLabel;
}

@property (nonatomic) char monitorModifierFlags;
@property (nonatomic) unsigned long long currentModifierFlags;
@property (nonatomic) char useAlternateState;
@property (readonly, weak, nonatomic) NSButton *button;
@property (nonatomic) unsigned long long alternateModifierFlags;
@property (nonatomic) SEL alternateAction;
@property (copy, nonatomic) NSString *alternateToolTip;
@property (copy, nonatomic) NSString *alternateAccessibilityLabel;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateState;
- (id)initWithButton:(id)a0;

@end
