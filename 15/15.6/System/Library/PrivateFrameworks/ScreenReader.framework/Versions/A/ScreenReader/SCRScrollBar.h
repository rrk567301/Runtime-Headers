@class AXFUIElement;

@interface SCRScrollBar : SCRElement {
    char _isVertical;
    AXFUIElement *_incrementUIElement;
    AXFUIElement *_decrementUIElement;
    AXFUIElement *_incrementPageUIElement;
    AXFUIElement *_decrementPageUIElement;
    AXFUIElement *_valueIndicatorUIElement;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (char)decrement;
- (char)increment;
- (char)end;
- (char)isVertical;
- (long long)orientation;
- (double)percentage;
- (char)home;
- (void)setPercentage:(double)a0;
- (char)isInteractive;
- (long long)brailleLineType;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)highlightTarget;
- (id)_decrementPageUIElement;
- (id)_decrementUIElement;
- (id)_defaultLocalizedStringForCommandKey:(id)a0;
- (void)_handleScroll:(id)a0;
- (id)_incrementPageUIElement;
- (id)_incrementUIElement;
- (char)allowBuildChildren;
- (char)decrementPage;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)incrementPage;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isControlElement;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)shouldNavigate;

@end
