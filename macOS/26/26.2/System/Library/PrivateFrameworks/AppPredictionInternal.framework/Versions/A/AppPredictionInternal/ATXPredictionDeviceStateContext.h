@class NSString;

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain

@property (readonly, nonatomic) BOOL onWifi;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) BOOL inAirplaneMode;

- (id)initWithWifiSSID:(id)a0 onWifi:(BOOL)a1 inAirplaneMode:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (BOOL)isEqualToATXPredictionDeviceStateContext:(id)a0;
- (id)initWithProto:(id)a0;
- (id)description;
- (id)encodeAsProto;

@end
