@interface SCRProgressIndicator : SCRElement {
    double _lastValueChangedTime;
}

- (id)typeDescription;
- (id)minValue;
- (id)maxValue;
- (id)statusDescription;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)listenForValueChangeWithoutKeyboardFocus;
- (BOOL)_isBusyIndicator;
- (id)_valueForPercentFormatter;

@end
