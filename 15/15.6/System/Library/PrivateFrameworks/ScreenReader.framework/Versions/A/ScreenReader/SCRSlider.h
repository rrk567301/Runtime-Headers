@class NSString, SCRElement;

@interface SCRSlider : SCRMapElement {
    long long _orientation;
    SCRElement *_valueIndicator;
}

@property (copy, nonatomic) NSString *valueDescriptionAtLastValueChange;
@property (nonatomic) unsigned char echoState;
@property (nonatomic) char _handlingValueChangeNotification;

- (void)dealloc;
- (id)description;
- (float)floatValue;
- (void).cxx_destruct;
- (id)typeDescription;
- (char)decrement;
- (char)increment;
- (id)maxValue;
- (id)minValue;
- (char)end;
- (long long)orientation;
- (char)home;
- (id)valueDescription;
- (id)statusDescription;
- (char)isInteractive;
- (long long)brailleLineType;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)highlightTarget;
- (id)_defaultLocalizedStringForCommandKey:(id)a0;
- (void)_handleInteractionChangeWithRequest:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)_hasMultipleIndicators;
- (char)_isBackwardNavigationCommand:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (char)allowBuildChildren;
- (char)allowFocusThroughSingleChild;
- (char)canHandleValueChange;
- (char)decrementLarge;
- (char)decrementSmall;
- (char)decrementWithPercentage:(double)a0;
- (void)delayOutputValueDescription;
- (unsigned long long)directInteractionArrowCaptureMask;
- (void)echoValueChangeToRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleAttributeChange:(id)a0;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (char)handleRotorAdjustWithEvent:(id)a0 direction:(long long)a1 request:(id)a2;
- (char)incrementLarge;
- (char)incrementSmall;
- (char)incrementWithPercentage:(double)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (char)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;
- (char)isAdjustable;
- (char)isControlElement;
- (id)itemDescriptionForEcho;
- (char)listenForValueChangeWithoutKeyboardFocus;
- (double)maxFloatValue;
- (double)minFloatValue;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (double)percentValue;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)shouldFocusOntoChild:(id)a0;
- (id)summaryTypeDescription;

@end
