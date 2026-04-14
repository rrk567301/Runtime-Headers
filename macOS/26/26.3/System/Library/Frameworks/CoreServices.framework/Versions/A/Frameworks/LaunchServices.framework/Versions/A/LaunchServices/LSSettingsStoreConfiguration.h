@class NSXPCListenerEndpoint;

@interface LSSettingsStoreConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSXPCListenerEndpoint *endpoint;

- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
