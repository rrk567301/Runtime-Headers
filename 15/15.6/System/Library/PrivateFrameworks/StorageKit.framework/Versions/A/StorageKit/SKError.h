@class NSBundle;

@interface SKError : NSObject

@property (class, readonly) NSBundle *frameworkBundle;

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)localizedDescriptionForCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 debugDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 debugDescription:(id)a1 error:(id *)a2;
+ (id)errorWithCode:(long long)a0 disks:(id)a1 userInfo:(id)a2;
+ (id)errorWithOSStatus:(int)a0 debugDescription:(id)a1 error:(id *)a2;
+ (id)errorWithOSStatus:(int)a0 error:(id *)a1;
+ (id)errorWithPOSIXCode:(int)a0 debugDescription:(id)a1 error:(id *)a2;
+ (id)errorWithPOSIXCode:(int)a0 error:(id *)a1;
+ (char)failWithError:(id)a0 error:(id *)a1;
+ (char)failWithOSStatus:(int)a0 debugDescription:(id)a1 error:(id *)a2;
+ (char)failWithOSStatus:(int)a0 error:(id *)a1;
+ (char)failWithPOSIXCode:(int)a0 debugDescription:(id)a1 error:(id *)a2;
+ (char)failWithPOSIXCode:(int)a0 error:(id *)a1;
+ (char)failWithSKErrorCode:(long long)a0 debugDescription:(id)a1 error:(id *)a2;
+ (char)failWithSKErrorCode:(long long)a0 error:(id *)a1;
+ (id)nilWithError:(id)a0 error:(id *)a1;
+ (id)nilWithOSStatus:(int)a0 debugDescription:(id)a1 error:(id *)a2;
+ (id)nilWithOSStatus:(int)a0 error:(id *)a1;
+ (id)nilWithPOSIXCode:(int)a0 debugDescription:(id)a1 error:(id *)a2;
+ (id)nilWithPOSIXCode:(int)a0 error:(id *)a1;
+ (id)nilWithSKErrorCode:(long long)a0 debugDescription:(id)a1 error:(id *)a2;
+ (id)nilWithSKErrorCode:(long long)a0 error:(id *)a1;

@end
