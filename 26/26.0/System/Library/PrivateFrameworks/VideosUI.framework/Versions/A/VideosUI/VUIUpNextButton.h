@class VUIUpNextButtonProperties, NSString;

@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol>

@property (retain, nonatomic) VUIUpNextButtonProperties *properties;
@property (copy, nonatomic) id /* block */ stateDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)hasLabel;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;
- (void)selectButtonAction:(id)a0;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;
- (void)updateAccessibilityIdentifierAfterStateChanged;
- (void)updateAccessibilityLabelAfterStateChanged;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
