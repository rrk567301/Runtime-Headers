@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char registerBroker;
@property (nonatomic) char registerPeerPayment;

+ (id)remoteRegistrationRequestWithProtobuf:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (char)isEqualToRemoteRegistrationRequest:(id)a0;

@end
