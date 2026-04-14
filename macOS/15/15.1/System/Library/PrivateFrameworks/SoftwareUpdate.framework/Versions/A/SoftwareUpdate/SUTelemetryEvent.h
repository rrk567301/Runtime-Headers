@class SUTelemetryEventFormatter;

@interface SUTelemetryEvent : NSObject

@property (readonly) SUTelemetryEventFormatter *formatter;

- (id)init;
- (void)appendTelemetryForResult:(BOOL)a0 toDict:(id)a1;
- (void)appendTelemetryFromError:(id)a0 toDict:(id)a1;
- (void)appendTelemetryFromSUProduct:(id)a0 toDict:(id)a1;

@end
