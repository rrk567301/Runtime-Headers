@interface RemoteCompositorEndpoint : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ endpointType;
    void /* unknown type, empty encoding */ networkEndpoint;
    void /* unknown type, empty encoding */ originalNetworkEndpoint;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
