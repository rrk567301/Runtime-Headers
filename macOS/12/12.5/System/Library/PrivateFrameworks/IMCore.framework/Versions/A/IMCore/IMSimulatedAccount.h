@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)loginIMHandle;
- (BOOL)supportsRegistration;
- (BOOL)isOperational;

@end
