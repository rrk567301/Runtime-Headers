@class NSString;

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain

@property (readonly, nonatomic) BOOL onWifi;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) BOOL inAirplaneMode;

- (id)encodeAsProto;
- (id)initWithWifiSSID:(id)a0 onWifi:(BOOL)a1 inAirplaneMode:(BOOL)a2;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)description;
- (BOOL)isEqualToATXPredictionDeviceStateContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
