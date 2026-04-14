@class NSBundle;

@interface DIError : NSObject

@property (class, readonly) NSBundle *frameworkBundle;

+ (BOOL)failWithPOSIXCode:(int)a0 error:(id *)a1;
+ (id)errorWithEnumValue:(long long)a0 verboseInfo:(id)a1;
+ (id)errorWithPOSIXCode:(int)a0 verboseInfo:(id)a1;
+ (BOOL)mandatoryArgumentFailWithError:(id *)a0;
+ (id)copyDefaultLocalizedStringForDIErrorCode:(long long)a0;
+ (id)errorWithDIException:(const void *)a0 description:(id)a1 prefix:(id)a2 error:(id *)a3;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2 verboseInfo:(id)a3 error:(id *)a4;
+ (id)errorWithUnexpected:(struct unexpected<std::error_code> { struct error_code { int x0; struct error_category *x1; } x0; })a0 verboseInfo:(id)a1 error:(id *)a2;
+ (BOOL)failWithDIException:(const void *)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithDIException:(const void *)a0 prefix:(id)a1 error:(id *)a2;
+ (BOOL)failWithEnumValue:(long long)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithEnumValue:(long long)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (BOOL)failWithInError:(id)a0 outError:(id *)a1;
+ (BOOL)failWithOSStatus:(int)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithOSStatus:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (BOOL)failWithPOSIXCode:(int)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithPOSIXCode:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (BOOL)failWithUnexpected:(struct unexpected<std::error_code> { struct error_code { int x0; struct error_category *x1; } x0; })a0 error:(id *)a1;
+ (BOOL)failWithUnexpected:(struct unexpected<std::error_code> { struct error_code { int x0; struct error_category *x1; } x0; })a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithDIException:(const void *)a0 description:(id)a1 error:(id *)a2;
+ (id)nilWithDIException:(const void *)a0 prefix:(id)a1 error:(id *)a2;
+ (id)nilWithEnumValue:(long long)a0 description:(id)a1 error:(id *)a2;
+ (id)nilWithEnumValue:(long long)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithOSStatus:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithPOSIXCode:(int)a0 description:(id)a1 error:(id *)a2;
+ (id)nilWithPOSIXCode:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithUnexpected:(struct unexpected<std::error_code> { struct error_code { int x0; struct error_category *x1; } x0; })a0 error:(id *)a1;
+ (id)nilWithUnexpected:(struct unexpected<std::error_code> { struct error_code { int x0; struct error_category *x1; } x0; })a0 verboseInfo:(id)a1 error:(id *)a2;

@end
