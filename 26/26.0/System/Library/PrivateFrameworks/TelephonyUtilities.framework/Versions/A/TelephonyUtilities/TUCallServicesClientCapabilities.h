@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<TUCallServicesClientCapabilitiesActions> delegate;
@property (nonatomic) BOOL wantsCallDisconnectionOnInvalidation;
@property (nonatomic) BOOL wantsCallStopStreamingOnInvalidation;
@property (nonatomic) BOOL wantsFrequencyChangeNotifications;
@property (nonatomic) BOOL wantsToScreenCalls;
@property (nonatomic) BOOL wantsCallNotificationsDisabledWhileSuspended;
@property (nonatomic) BOOL excludeFullNearbyCalls;

- (void)save;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
