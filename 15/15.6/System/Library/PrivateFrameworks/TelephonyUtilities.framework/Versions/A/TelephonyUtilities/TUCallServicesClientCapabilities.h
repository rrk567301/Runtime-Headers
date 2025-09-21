@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) id<TUCallServicesClientCapabilitiesActions> delegate;
@property (nonatomic) char wantsCallDisconnectionOnInvalidation;
@property (nonatomic) char wantsCallStopStreamingOnInvalidation;
@property (nonatomic) char wantsFrequencyChangeNotifications;
@property (nonatomic) char wantsToScreenCalls;
@property (nonatomic) char wantsCallNotificationsDisabledWhileSuspended;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)save;

@end
