@class ABRTTServices;

@interface ABCardViewPhoneProperty : ABCardViewProperty {
    ABRTTServices *_ttyServices;
}

- (void).cxx_destruct;
- (BOOL)isValueEmpty:(id)a0;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (id)actionGlyphNames;
- (id)actionForGlyphName:(id)a0;
- (id)initWithValueKey:(id)a0 TTYServices:(id)a1;

@end
