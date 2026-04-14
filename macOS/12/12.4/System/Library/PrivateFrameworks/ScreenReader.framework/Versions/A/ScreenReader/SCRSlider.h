@class NSString, SCRElement;

@interface SCRSlider : SCRMapElement {
    long long _orientation;
    SCRElement *_valueIndicator;
}

@property (copy, nonatomic) NSString *valueDescriptionAtLastValueChange;
@property (nonatomic) unsigned char echoState;
@property (nonatomic) BOOL _handlingValueChangeNotification;

- (void)dealloc;
- (id)description;
- (float)floatValue;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)decrement;
- (BOOL)increment;
- (id)minValue;
- (id)maxValue;
- (BOOL)end;
- (long long)orientation;
- (BOOL)home;
- (id)valueDescription;
- (id)statusDescription;
- (BOOL)isInteractive;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addElementSummaryToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)allowBuildChildren;
- (long long)groupBehavior;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (double)percentValue;
- (long long)brailleLineType;
- (BOOL)shouldFocusOntoChild:(id)a0;
- (double)minFloatValue;
- (BOOL)decrementWithPercentage:(double)a0;
- (double)maxFloatValue;
- (BOOL)incrementWithPercentage:(double)a0;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)incrementLarge;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)incrementSmall;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;
- (void)handleAttributeChange:(id)a0;
- (BOOL)listenForValueChangeWithoutKeyboardFocus;
- (id)_defaultLocalizedStringForCommandKey:(id)a0;
- (id)highlightTarget;
- (BOOL)isAdjustable;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (void)delayOutputValueDescription;
- (BOOL)_hasMultipleIndicators;
- (void)_handleInteractionChangeWithRequest:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)_isBackwardNavigationCommand:(id)a0;
- (id)summaryTypeDescription;
- (BOOL)handleRotorAdjustWithEvent:(id)a0 direction:(long long)a1 request:(id)a2;

@end
