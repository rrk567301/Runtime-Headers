@class NSObject;
@protocol OS_xpc_object;

@interface SCMachPort : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_xpc_object> *machPort;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
