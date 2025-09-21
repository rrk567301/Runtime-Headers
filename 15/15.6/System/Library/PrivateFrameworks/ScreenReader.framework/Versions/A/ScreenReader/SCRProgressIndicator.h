@interface SCRProgressIndicator : SCRElement {
    double _lastValueChangedTime;
}

- (id)typeDescription;
- (id)maxValue;
- (id)minValue;
- (id)statusDescription;
- (char)_isBusyIndicator;
- (id)_valueForPercentFormatter;
- (char)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)listenForValueChangeWithoutKeyboardFocus;

@end
