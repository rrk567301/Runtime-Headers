@interface SCRProgressIndicator : SCRElement {
    double _lastValueChangedTime;
}

- (id)statusDescription;
- (id)maxValue;
- (id)minValue;
- (id)typeDescription;
- (BOOL)_isBusyIndicator;
- (id)_valueForPercentFormatter;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)listenForValueChangeWithoutKeyboardFocus;

@end
