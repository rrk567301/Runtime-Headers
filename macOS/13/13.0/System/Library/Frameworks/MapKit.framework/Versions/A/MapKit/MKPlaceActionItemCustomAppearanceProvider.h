@class NSString;

@interface MKPlaceActionItemCustomAppearanceProvider : MKPlaceActionItemAppearanceProvider {
    NSString *_overrideTitle;
    NSString *_overrideSymbolName;
}

- (void).cxx_destruct;
- (id)bestTitleForDisplayStyle:(unsigned long long)a0;
- (id)bestSymbolNameForDisplayStyle:(unsigned long long)a0;
- (id)initWithActionType:(unsigned long long)a0 overrideTitle:(id)a1 symbolName:(id)a2;

@end
