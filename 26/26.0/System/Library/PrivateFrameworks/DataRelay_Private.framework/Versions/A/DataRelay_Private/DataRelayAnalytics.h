@class NSString, NSMutableDictionary, NSDate;

@interface DataRelayAnalytics : NSObject {
    NSString *_entryPoint;
    NSMutableDictionary *_dataRelaySessionAnalyticDict;
    NSDate *_sessionStartTimestamp;
    NSDate *_hrmServiceStartedTimestamp;
    NSDate *_dm6ServiceStartedTimestamp;
}

+ (id)getInstance;

- (id)init;
- (void).cxx_destruct;
- (void)submitDataRelaySessionAnalytics;
- (void)markDM6FirstPacket;
- (void)markHRMFirstPacket;
- (void)resetDataRelaySessionAnalyticDict;
- (void)setDM6ServiceSetupTime;
- (void)setDRSessionEnded;
- (void)setDRSessionStarted;
- (void)setHRMServiceSetupTime;
- (void)updateDRDeviceTypes:(BOOL)a0 drClientDeviceType:(id)a1 drServerDeviceType:(id)a2;
- (void)updateFromRemoteServer:(BOOL)a0;
- (void)updateRapportDiscoveryTime:(double)a0;
- (void)updateSetupReturnStatus:(id)a0;

@end
