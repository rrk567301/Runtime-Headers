@class SCRUIElement;

@interface SCRScrollBar : SCRElement {
    BOOL _isVertical;
    SCRUIElement *_incrementUIElement;
    SCRUIElement *_decrementUIElement;
    SCRUIElement *_incrementPageUIElement;
    SCRUIElement *_decrementPageUIElement;
    SCRUIElement *_valueIndicatorUIElement;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)decrement;
- (BOOL)increment;
- (BOOL)end;
- (long long)orientation;
- (BOOL)isVertical;
- (double)percentage;
- (BOOL)home;
- (void)setPercentage:(double)a0;
- (BOOL)isInteractive;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)allowBuildChildren;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (long long)brailleLineType;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)_defaultLocalizedStringForCommandKey:(id)a0;
- (id)highlightTarget;
- (id)_incrementUIElement;
- (id)_decrementUIElement;
- (BOOL)decrementPage;
- (BOOL)incrementPage;
- (void)_handleScroll:(id)a0;
- (id)_decrementPageUIElement;
- (id)_incrementPageUIElement;

@end
