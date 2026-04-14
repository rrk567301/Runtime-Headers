@class NSDateFormatter;

@interface SUTelemetryEventFormatter : NSObject

@property NSDateFormatter *dateFormatter;

+ (id)defaultFormatter;

- (id)init;
- (id)formatBool:(BOOL)a0;
- (id)formatDate:(id)a0;
- (id)formatDouble:(double)a0;
- (id)formatInteger:(long long)a0;
- (id)formatResult:(BOOL)a0;
- (id)formatUnsignedLongLong:(unsigned long long)a0;
- (id)formatValuesInDict:(id)a0;

@end
