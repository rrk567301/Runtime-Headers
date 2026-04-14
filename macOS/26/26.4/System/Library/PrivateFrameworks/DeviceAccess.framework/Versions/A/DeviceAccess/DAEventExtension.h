@class NSString, DADevice;

@interface DAEventExtension : DAEvent

@property (nonatomic) unsigned long long capabilityFlag;
@property (readonly, nonatomic) DADevice *device;
@property (nonatomic) long long extensionType;
@property (copy, nonatomic) NSString *sessionID;

+ (BOOL)supportsSecureCoding;
+ (id)allocInitWithXPCObject:(id)a0 error:(id *)a1;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 device:(id)a1;
- (id)initWithEventType:(long long)a0 device:(id)a1 error:(id)a2;

@end
