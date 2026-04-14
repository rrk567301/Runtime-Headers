@interface AXAudioHardwareManager : NSObject

+ (id)sharedManager;
+ (id)defaultPort;
+ (void)setDefaultPort:(id)a0;
+ (BOOL)channelsAreAirplay:(id)a0 route:(id)a1;
+ (BOOL)channelsAreWiredHeadphones:(id)a0;
+ (void)enableMultiroute;
+ (void)disableMultiroute;
+ (void)setDefaultPortChannels:(id)a0;
+ (void)setDefaultRouteDescription:(id)a0;
+ (id)defaultRouteDescription;
+ (void)updateTestingChannels;
+ (id)channelsForPort:(id)a0;
+ (id)defaultPortChannels;

- (id)init;
- (BOOL)isDolbyAtmosConfigured;
- (id)_savedIdForRouteDescription:(id)a0;
- (id)savedChannelsForOutput:(id)a0 forSource:(long long)a1;
- (void)_handleSurroundSoundDefaults:(id)a0 returnedChannels:(id)a1 port:(id)a2 source:(long long)a3;
- (void)setSavedChannels:(id)a0 forOutput:(id)a1 forSource:(long long)a2;

@end
