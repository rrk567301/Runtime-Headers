@interface LACError : NSObject

+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (BOOL)error:(id)a0 hasCode:(long long)a1 subcode:(long long)a2;
+ (id)errorWithCode:(long long)a0;
+ (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0 debugDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 debugDescription:(id)a2;

@end
