@class NSObject;
@protocol OS_xpc_object;

@interface GTDisplayUpdateTerminationRequest : GTDisplayUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *path;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
