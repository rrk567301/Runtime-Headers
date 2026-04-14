@class ASDTCondition, NSString, ASDTCustomProperty, ASDPropertyAddress;
@protocol ASDTNumericProperty;

@interface ASDTPMActionNumericPropertyAnalyticsEvent : ASDTPMActionAnalyticsEvent

@property (weak, nonatomic) ASDTCustomProperty<ASDTNumericProperty> *numericProperty;
@property (retain, nonatomic) ASDPropertyAddress *propertyAddress;
@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) ASDTCondition *lock;

- (void).cxx_destruct;
- (id)eventData;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;

@end
