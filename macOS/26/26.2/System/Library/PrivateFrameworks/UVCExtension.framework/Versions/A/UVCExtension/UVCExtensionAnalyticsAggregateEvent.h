@class NSString, NSMutableDictionary;

@interface UVCExtensionAnalyticsAggregateEvent : UVCExtensionAnalyticsEvent {
    NSString *_aggregationName;
    NSMutableDictionary *_aggregationTypeCount;
}

- (id)currentValue;
- (void).cxx_destruct;
- (void)setCurrentValue:(id)a0;
- (id)initWithName:(id)a0 attributes:(id)a1 aggregationName:(id)a2;

@end
