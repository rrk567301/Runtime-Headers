@interface SIResponseHandler : NSObject

+ (id)getServer;
+ (void)handleMailResponse:(id)a0 forQuery:(id)a1;
+ (void)handleSettingsResponse:(id)a0 forQuery:(id)a1;
+ (void)handleSpotlightResponse:(id)a0 forQuery:(id)a1;

- (id)init;

@end
