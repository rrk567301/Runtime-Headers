@class NSObject;
@protocol OS_xpc_object;

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_endpoint;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_endpoint;
- (id)_initWithConnection:(id)a0;
- (void)_setEndpoint:(id)a0;

@end
