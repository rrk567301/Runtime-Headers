@interface LACStorageError : NSObject

+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 debugDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 debugDescription:(id)a2;

@end
