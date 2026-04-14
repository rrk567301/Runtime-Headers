@interface RemoteCompositorEndpoint : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ endpointType;
    void /* unknown type, empty encoding */ networkEndpoint;
    void /* unknown type, empty encoding */ originalNetworkEndpoint;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
