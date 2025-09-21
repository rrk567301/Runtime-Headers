@class NSObject;
@protocol OS_xpc_object;

@interface PLXPCObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSObject<OS_xpc_object> *object;

+ (struct _xpc_type_s { } *)type;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;

@end
