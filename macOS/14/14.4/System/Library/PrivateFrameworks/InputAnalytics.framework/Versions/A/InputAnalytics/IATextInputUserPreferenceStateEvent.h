@class NSString;

@interface IATextInputUserPreferenceStateEvent : NSObject <IATelemetryEvent>

@property (copy, nonatomic) NSString *preferenceName;
@property (nonatomic) long long preferenceValue;

- (void).cxx_destruct;
- (BOOL)isDispatchable;
- (void)dispatchEvent:(id /* block */)a0;
- (void)resetMeasures;

@end
