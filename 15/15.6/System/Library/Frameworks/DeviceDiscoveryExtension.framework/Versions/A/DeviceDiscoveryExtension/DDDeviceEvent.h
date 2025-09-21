@class NSError, DDDevice;

@interface DDDeviceEvent : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) DDDevice *device;
@property (readonly, nonatomic) long long eventType;

+ (id)allocInitWithXPCObject:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)createDADeviceEvent;
- (id)initWithEventType:(long long)a0 device:(id)a1;

@end
