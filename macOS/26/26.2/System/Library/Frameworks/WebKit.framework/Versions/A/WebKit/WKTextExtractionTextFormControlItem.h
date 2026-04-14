@class NSString;

@interface WKTextExtractionTextFormControlItem : WKTextExtractionItem {
    void /* unknown type, empty encoding */ editable;
    void /* function */ controlType;
    void /* function */ autocomplete;
    void /* unknown type, empty encoding */ backingIsReadonly;
    void /* unknown type, empty encoding */ backingIsDisabled;
    void /* unknown type, empty encoding */ backingIsChecked;
}

@property (nonatomic, readonly) BOOL secure;
@property (nonatomic, readonly) BOOL focused;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *placeholder;
@property (nonatomic, readonly) NSString *controlType;
@property (nonatomic, readonly) NSString *autocomplete;
@property (nonatomic, readonly) BOOL readonly;
@property (nonatomic, readonly) BOOL disabled;
@property (nonatomic, readonly) BOOL checked;

- (BOOL)isDisabled;
- (BOOL)isReadonly;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isChecked;
- (id)initWithEditable:(id)a0 controlType:(id)a1 autocomplete:(id)a2 isReadonly:(BOOL)a3 isDisabled:(BOOL)a4 isChecked:(BOOL)a5 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 children:(id)a7 eventListeners:(unsigned long long)a8 ariaAttributes:(id)a9 accessibilityRole:(id)a10 nodeIdentifier:(id)a11;

@end
