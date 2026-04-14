@class DADevice;

@interface DAEventExtension : DAEvent

@property (readonly, nonatomic) DADevice *device;
@property (nonatomic) long long extensionType;

+ (BOOL)supportsSecureCoding;
+ (id)allocInitWithXPCObject:(id)a0 error:(id *)a1;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 device:(id)a1;
- (id)initWithEventType:(long long)a0 device:(id)a1 error:(id)a2;

@end
