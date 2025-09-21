@class IOKService;

@interface IOKConnection : NSObject

@property (readonly, nonatomic) unsigned int connection;
@property (readonly, copy, nonatomic) IOKService *service;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithService:(id)a0;
- (char)callMethodWithSelector:(unsigned int)a0 scalarInputs:(const unsigned long long *)a1 scalarInputCount:(unsigned int)a2 scalarOutputs:(unsigned long long *)a3 scalarOutputCount:(unsigned int *)a4 error:(id *)a5;
- (id)initWithService:(id)a0 andType:(unsigned int)a1;
- (char)callAsyncMethodWithSelector:(unsigned int)a0 wakePort:(unsigned int)a1 reference:(unsigned long long *)a2 referenceCount:(unsigned int)a3 scalarInputs:(const unsigned long long *)a4 scalarInputCount:(unsigned int)a5 scalarOutputs:(unsigned long long *)a6 scalarOutputCount:(unsigned int *)a7 error:(id *)a8;
- (char)callAsyncMethodWithSelector:(unsigned int)a0 wakePort:(unsigned int)a1 reference:(unsigned long long *)a2 referenceCount:(unsigned int)a3 scalarInputs:(const unsigned long long *)a4 scalarInputCount:(unsigned int)a5 structInput:(const void *)a6 structInputSize:(unsigned long long)a7 scalarOutputs:(unsigned long long *)a8 scalarOutputCount:(unsigned int *)a9 structOutput:(void *)a10 structOutputSize:(unsigned long long *)a11 error:(id *)a12;
- (char)callAsyncMethodWithSelector:(unsigned int)a0 wakePort:(unsigned int)a1 reference:(unsigned long long *)a2 referenceCount:(unsigned int)a3 structInput:(const void *)a4 structInputSize:(unsigned long long)a5 structOutput:(void *)a6 structOutputSize:(unsigned long long *)a7 error:(id *)a8;
- (char)callMethodWithSelector:(unsigned int)a0 scalarInputs:(const unsigned long long *)a1 scalarInputCount:(unsigned int)a2 structInput:(const void *)a3 structInputSize:(unsigned long long)a4 scalarOutputs:(unsigned long long *)a5 scalarOutputCount:(unsigned int *)a6 structOutput:(void *)a7 structOutputSize:(unsigned long long *)a8 error:(id *)a9;
- (char)callMethodWithSelector:(unsigned int)a0 structInput:(const void *)a1 structInputSize:(unsigned long long)a2 structOutput:(void *)a3 structOutputSize:(unsigned long long *)a4 error:(id *)a5;
- (char)mapMemory64OfType:(unsigned int)a0 withOptions:(unsigned int)a1 atAddress:(unsigned long long *)a2 ofSize:(unsigned long long *)a3 error:(id *)a4;
- (char)setNotificationPort:(id)a0 ofType:(unsigned int)a1 withReference:(unsigned long long)a2 error:(id *)a3;
- (char)setProperties:(id)a0 error:(id *)a1;
- (char)setProperty:(id)a0 withKey:(id)a1 error:(id *)a2;
- (char)trap:(unsigned int)a0 error:(id *)a1;
- (char)trap:(unsigned int)a0 p1:(unsigned long long)a1 error:(id *)a2;
- (char)trap:(unsigned int)a0 p1:(unsigned long long)a1 p2:(unsigned long long)a2 error:(id *)a3;
- (char)trap:(unsigned int)a0 p1:(unsigned long long)a1 p2:(unsigned long long)a2 p3:(unsigned long long)a3 error:(id *)a4;
- (char)trap:(unsigned int)a0 p1:(unsigned long long)a1 p2:(unsigned long long)a2 p3:(unsigned long long)a3 p4:(unsigned long long)a4 error:(id *)a5;
- (char)trap:(unsigned int)a0 p1:(unsigned long long)a1 p2:(unsigned long long)a2 p3:(unsigned long long)a3 p4:(unsigned long long)a4 p5:(unsigned long long)a5 error:(id *)a6;
- (char)trap:(unsigned int)a0 p1:(unsigned long long)a1 p2:(unsigned long long)a2 p3:(unsigned long long)a3 p4:(unsigned long long)a4 p5:(unsigned long long)a5 p6:(unsigned long long)a6 error:(id *)a7;
- (char)unmapMemory64OfType:(unsigned int)a0 atAddress:(unsigned long long)a1 error:(id *)a2;

@end
