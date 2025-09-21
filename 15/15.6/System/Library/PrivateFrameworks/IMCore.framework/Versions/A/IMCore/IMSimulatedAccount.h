@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (void).cxx_destruct;
- (char)isConnected;
- (char)supportsRegistration;
- (char)isOperational;
- (id)loginIMHandle;

@end
