@class NSNumberFormatter;

@interface NSRulerLabelCell : NSTextFieldCell {
    NSNumberFormatter *_auxiliaryFormatter;
}

- (void)dealloc;
- (long long)_typesetterBehavior;
- (id)_auxiliaryFormatter;
- (void)_setAuxiliaryFormatter:(id)a0;

@end
