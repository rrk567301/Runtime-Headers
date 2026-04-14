@class NSButton, NSString, NSImage;

@interface PXAlternatingButtonHelper : NSObject {
    id _modifierFlagsMonitor;
    BOOL _didCaptureOriginalState;
    SEL _originalAction;
    NSImage *_originalImage;
    NSString *_originalToolTip;
    NSString *_originalAccessibilityLabel;
}

@property (nonatomic) BOOL monitorModifierFlags;
@property (nonatomic) unsigned long long currentModifierFlags;
@property (nonatomic) BOOL useAlternateState;
@property (readonly, weak, nonatomic) NSButton *button;
@property (nonatomic) unsigned long long alternateModifierFlags;
@property (nonatomic) SEL alternateAction;
@property (copy, nonatomic) NSString *alternateToolTip;
@property (copy, nonatomic) NSString *alternateAccessibilityLabel;

- (void)_updateState;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithButton:(id)a0;

@end
