@class NSObject;
@protocol OS_xpc_object;

@interface REXPCObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *object;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
