@class NSString, NSMutableDictionary;

@interface UVCExtensionAnalyticsAggregateEvent : UVCExtensionAnalyticsEvent {
    NSString *_aggregationName;
    NSMutableDictionary *_aggregationTypeCount;
}

- (void).cxx_destruct;
- (void)setCurrentValue:(id)a0;
- (id)currentValue;
- (id)initWithName:(id)a0 attributes:(id)a1 aggregationName:(id)a2;

@end
