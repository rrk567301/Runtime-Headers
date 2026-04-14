@class NSOrderedSet, NSString, NSDate, SCRValueChangeMonitor;

@interface SCRDateTime : SCRElement <SCRValueChangeMonitorDelegate>

@property (retain, nonatomic, setter=_setAccessibilityDateValue:) NSDate *_accessibilityDateValue;
@property (retain, nonatomic, setter=_setCachedDateValue:) NSDate *_cachedDateValue;
@property (readonly, copy, nonatomic) NSOrderedSet *_supportedDateTimeComponents;
@property (copy, nonatomic, setter=_setCurrentlyFocusedComponent:) NSString *_currentlyFocusedComponent;
@property (readonly, nonatomic) SCRValueChangeMonitor *_valueChangeMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)valueDescription;
- (id)roleDescription;
- (BOOL)isInteractive;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (id)_dateTimeComponentsFromFlags:(unsigned long long)a0;
- (long long)_valueForDateComponent:(id)a0 withDate:(id)a1;
- (id)_descriptionForComponent:(id)a0 withDate:(id)a1;
- (id)_previousComponentWithComponent:(id)a0;
- (id)_nextComponentWithComponent:(id)a0;
- (id)_descriptionForComponent:(id)a0;
- (BOOL)_switchToComponentWithRequest:(id)a0 inDirection:(long long)a1;
- (id)_moveFromComponent:(id)a0 inDirection:(long long)a1;
- (long long)_adjustedHourForMeridianTime:(long long)a0;
- (BOOL)_changeComponentWithRequest:(id)a0 action:(long long)a1;
- (BOOL)_switchToPreviousComponentWithRequest:(id)a0;
- (BOOL)_switchToNextComponentWithRequest:(id)a0;
- (BOOL)_hasDateComponents;
- (BOOL)_hasTimeComponents;
- (id)_dateTimeOrderingFromFormat:(id)a0;
- (id)_descriptionForTimeComponents:(id)a0 withDate:(id)a1;
- (BOOL)didHandleNewValueAfterPolling:(id)a0;
- (long long)brailleLineType;

@end
