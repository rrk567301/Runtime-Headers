@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)isOperational;
- (id)loginIMHandle;
- (BOOL)supportsRegistration;

@end
