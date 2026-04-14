@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences;

- (void)_updateFromPreferences;
- (void).cxx_destruct;
- (BOOL)clientDisabled:(long long)a0;
- (id)init;

@end
