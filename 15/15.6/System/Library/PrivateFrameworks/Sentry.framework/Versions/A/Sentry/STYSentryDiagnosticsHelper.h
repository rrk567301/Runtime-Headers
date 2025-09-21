@interface STYSentryDiagnosticsHelper : NSObject

+ (char)_close:(int)a0 error:(id *)a1;
+ (int)_openOutputFile:(id)a0 error:(id *)a1;
+ (char)compressFileAtURL:(id)a0 outputURL:(id)a1 error:(id *)a2;
+ (char)saveTailspin:(id)a0 reason:(id)a1 includeSignposts:(char)a2 includeLogs:(char)a3 startTime:(unsigned long long)a4 endTime:(unsigned long long)a5 symbolicate:(char)a6 error:(id *)a7;
+ (id)sentryAttributesForURL:(id)a0;
+ (char)setSentryAttributesToURL:(id)a0 attributes:(id)a1 error:(id *)a2;
+ (char)tailspinEnabled:(char)a0;

@end
