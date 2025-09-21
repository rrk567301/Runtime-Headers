@class NSString;

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain

@property (readonly, nonatomic) char onWifi;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) char inAirplaneMode;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithWifiSSID:(id)a0 onWifi:(char)a1 inAirplaneMode:(char)a2;
- (char)isEqualToATXPredictionDeviceStateContext:(id)a0;

@end
