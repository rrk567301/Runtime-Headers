@interface _ANEDeviceController : NSObject

@property (nonatomic) long long usecount;
@property (readonly, nonatomic) char isPrivileged;
@property (nonatomic) struct ANEDeviceStruct { void *x0; void *x1; void *x2; unsigned char x3; int x4; } *device;
@property (readonly, nonatomic) unsigned long long programHandle;

+ (id)new;
+ (void)initialize;
+ (id)controllerWithPrivilegedVM:(char)a0;
+ (id)controllerWithProgramHandle:(unsigned long long)a0;
+ (id)sharedPrivilegedConnection;

- (id)init;
- (void)start;
- (void)stop;
- (id)initWithANEPrivilegedVM:(char)a0;
- (id)initWithProgramHandle:(unsigned long long)a0 priviledged:(char)a1;

@end
