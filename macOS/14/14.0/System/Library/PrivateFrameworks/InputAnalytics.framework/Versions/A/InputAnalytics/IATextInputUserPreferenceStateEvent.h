@class NSString;

@interface IATextInputUserPreferenceStateEvent : NSObject <IATelemetryEvent>

@property (retain) NSString *preferenceName;
@property long long preferenceValue;

- (void).cxx_destruct;
- (BOOL)isDispatchable;
- (void)dispatchEvent:(id /* block */)a0;
- (void)resetMeasures;

@end
