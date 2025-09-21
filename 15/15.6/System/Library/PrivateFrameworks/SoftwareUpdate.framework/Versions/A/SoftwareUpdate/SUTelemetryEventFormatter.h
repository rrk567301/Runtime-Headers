@interface SUTelemetryEventFormatter : NSObject

+ (id)formatBool:(char)a0;
+ (id)formatDate:(id)a0;
+ (id)formatDouble:(double)a0;
+ (id)formatInteger:(long long)a0;
+ (id)formatResult:(char)a0;
+ (id)formatUnsignedLongLong:(unsigned long long)a0;
+ (id)formatValuesInDict:(id)a0;
+ (unsigned long long)roundToMB:(unsigned long long)a0;

@end
