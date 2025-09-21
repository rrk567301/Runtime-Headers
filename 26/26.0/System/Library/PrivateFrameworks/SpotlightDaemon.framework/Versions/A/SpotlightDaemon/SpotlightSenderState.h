@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences;

- (id)init;
- (BOOL)clientDisabled:(long long)a0;
- (void)_updateFromPreferences;
- (void).cxx_destruct;

@end
