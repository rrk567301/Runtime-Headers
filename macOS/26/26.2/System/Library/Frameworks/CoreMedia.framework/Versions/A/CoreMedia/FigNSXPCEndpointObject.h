@class NSObject;
@protocol OS_xpc_object;

@interface FigNSXPCEndpointObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;

- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end
