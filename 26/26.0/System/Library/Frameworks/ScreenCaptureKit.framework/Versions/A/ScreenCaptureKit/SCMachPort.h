@class NSObject;
@protocol OS_xpc_object;

@interface SCMachPort : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_xpc_object> *machPort;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
