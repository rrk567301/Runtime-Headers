@class NSString;

@interface IASTextInputUserPreferenceStateEvent : NSObject <IATelemetryEvent>

@property (copy, nonatomic) NSString *preferenceName;
@property (nonatomic) long long preferenceValue;

- (void)dispatchEvent:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isDispatchable;
- (void)resetMeasures;

@end
