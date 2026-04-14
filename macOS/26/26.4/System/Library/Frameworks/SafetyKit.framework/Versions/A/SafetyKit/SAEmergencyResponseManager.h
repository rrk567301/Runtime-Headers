@class SAClient;
@protocol SAEmergencyResponseDelegate;

@interface SAEmergencyResponseManager : NSObject <SAEmergencyResponseClientProtocol>

@property (readonly, nonatomic) SAClient *client;
@property (weak, nonatomic) id<SAEmergencyResponseDelegate> delegate;

- (void)updateVoiceCallStatus:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dialVoiceCallToPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;

@end
