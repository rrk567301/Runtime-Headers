@class _NSPersonNameComponentsStyleFormatter, _NSPersonNameComponentsStyleFormatterShortVariantGeneral;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {
    long long _shortNameFormat;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral *_variantFormatter;
    _NSPersonNameComponentsStyleFormatter *_subFormatter;
    char _forceShortNameEnabled;
}

@property long long shortNameFormat;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;
@property (retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property char forceShortNameEnabled;

- (void)dealloc;
- (char)isEnabled;
- (id)abbreviatedKeys;
- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (id)fallbackStyleFormatter;
- (id)initWithMasterFormatter:(id)a0;
- (id)keysOfInterest;
- (id)orderedKeysOfInterest;

@end
