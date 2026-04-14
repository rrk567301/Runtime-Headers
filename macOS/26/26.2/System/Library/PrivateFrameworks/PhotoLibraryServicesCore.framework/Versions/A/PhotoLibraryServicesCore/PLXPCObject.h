@class NSObject;
@protocol OS_xpc_object;

@interface PLXPCObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSObject<OS_xpc_object> *object;

+ (struct _xpc_type_s { } *)type;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;

@end
