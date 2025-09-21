@class NSString;

@interface HomeAutomationInternal.TimeTriggerValue : TriggerValue {
    void /* unknown type, empty encoding */ triggerDate;
    void /* unknown type, empty encoding */ recurringDate;
    void /* unknown type, empty encoding */ isDateInterval;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
