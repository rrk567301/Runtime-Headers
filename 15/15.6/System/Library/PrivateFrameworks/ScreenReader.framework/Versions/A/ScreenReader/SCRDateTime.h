@class SCRValueChangeMonitor, NSString, NSDate;

@interface SCRDateTime : SCRElement <SCRValueChangeMonitorDelegate>

@property (retain, nonatomic, setter=_setAccessibilityDateValue:) NSDate *_accessibilityDateValue;
@property (retain, nonatomic, setter=_setCachedDateValue:) NSDate *_cachedDateValue;
@property (readonly, nonatomic) unsigned long long _supportedDateTimeComponents;
@property (nonatomic, setter=_setCurrentlyFocusedComponent:) unsigned long long _currentlyFocusedComponent;
@property (readonly, nonatomic) SCRValueChangeMonitor *_valueChangeMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)valueDescription;
- (id)roleDescription;
- (char)isInteractive;
- (unsigned long long)_moveFromComponent:(unsigned long long)a0 inDirection:(long long)a1;
- (long long)brailleLineType;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)_changeComponentWithRequest:(id)a0 action:(long long)a1;
- (unsigned long long)_nextComponentWithComponent:(unsigned long long)a0;
- (unsigned long long)_previousComponentWithComponent:(unsigned long long)a0;
- (char)_switchToComponentWithRequest:(id)a0 inDirection:(long long)a1;
- (char)_switchToNextComponentWithRequest:(id)a0;
- (char)_switchToPreviousComponentWithRequest:(id)a0;
- (char)didHandleNewValueAfterPolling:(id)a0;
- (long long)groupBehavior;
- (char)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isControlElement;

@end
