@class NSColor;

@interface NSTextValueBinder : NSValueBinder {
    struct __textBinderFlags { unsigned char _objectSupportsTextColor : 1; unsigned char _hasRequestedTextColor : 1; unsigned int _reservedTextBinder : 30; } _textBinderFlags;
    NSColor *_originalColor;
    NSColor *_nullColor;
    NSColor *_noSelectionColor;
    NSColor *_multipleValuesSelectionColor;
    NSColor *_notApplicableColor;
    id _textColorBinder;
}

+ (id)binderClassesSuperseded;
+ (void)setDefaultTextColor:(id)a0 whenObjectValueIsUsed:(id)a1;
+ (id)defaultTextColorWhenObjectValueIsUsed:(id)a0;

- (void)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_connectionWasEstablished;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_dealloc;
- (void)_setObject:(id)a0;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)_noticeTextColorPeerBinder:(id)a0;
- (void)_startChanging;
- (void)_endChanging;
- (void)setTextColor:(id)a0 whenObjectValueIsUsed:(id)a1;
- (id)textColorWhenObjectValueIsUsed:(id)a0;
- (void)_adjustTextColorOfObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;

@end
