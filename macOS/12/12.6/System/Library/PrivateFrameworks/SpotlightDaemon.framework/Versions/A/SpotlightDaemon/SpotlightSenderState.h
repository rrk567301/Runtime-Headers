@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences;

- (id)init;
- (void).cxx_destruct;
- (void)_updateFromPreferences;
- (BOOL)clientDisabled:(long long)a0;

@end
