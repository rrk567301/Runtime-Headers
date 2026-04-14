@class NSObject;
@protocol OS_xpc_object;

@interface GTDisplayUpdateTerminationRequest : GTDisplayUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *path;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
