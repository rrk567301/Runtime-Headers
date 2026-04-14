@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (BOOL)isConnected;
- (void).cxx_destruct;
- (BOOL)supportsRegistration;
- (BOOL)isOperational;
- (id)loginIMHandle;

@end
