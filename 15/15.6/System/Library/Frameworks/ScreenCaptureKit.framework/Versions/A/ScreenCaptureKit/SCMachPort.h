@class NSObject;
@protocol OS_xpc_object;

@interface SCMachPort : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSObject<OS_xpc_object> *machPort;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
