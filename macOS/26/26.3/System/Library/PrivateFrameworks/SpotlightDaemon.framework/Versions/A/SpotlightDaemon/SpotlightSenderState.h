@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences;

- (id)init;
- (void)_updateFromPreferences;
- (BOOL)clientDisabled:(long long)a0;
- (void).cxx_destruct;

@end
