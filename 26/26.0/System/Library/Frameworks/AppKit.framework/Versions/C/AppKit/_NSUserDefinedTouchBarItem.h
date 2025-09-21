@class NSString, NSButton;

@interface _NSUserDefinedTouchBarItem : NSTouchBarItem <NSValidatedUserInterfaceItem> {
    NSButton *_button;
    NSString *_title;
    NSString *_keyChars;
    NSString *_longPressEndKeyChars;
    unsigned long long _modifiers;
    unsigned short _keyCode;
}

@property SEL action;
@property (readonly) id effectiveTarget;
@property long long tag;
@property (copy) NSString *actionName;
@property (copy) NSString *label;
@property (copy) NSString *imageName;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (id)view;
- (void)_longPress:(id)a0;
- (void)_click:(id)a0;
- (void)_handleAction:(id)a0;
- (void)_validateUserDefinedTouchBarItem;
- (id)customizationLabel;

@end
