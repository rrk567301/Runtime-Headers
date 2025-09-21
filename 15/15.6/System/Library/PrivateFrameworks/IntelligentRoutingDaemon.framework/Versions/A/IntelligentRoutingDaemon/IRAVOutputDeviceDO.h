@class NSString;

@interface IRAVOutputDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) char hasAirplayProperties;
@property (readonly, nonatomic) char discoveredOverInfra;
@property (readonly, nonatomic) char discoveredWithBroker;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long deviceSubType;

+ (id)AVOutputDeviceToDO:(id)a0;
+ (id)aVOutputDeviceDOWithDeviceID:(id)a0 modelID:(id)a1 deviceName:(id)a2 hasAirplayProperties:(char)a3 discoveredOverInfra:(char)a4 discoveredWithBroker:(char)a5 deviceType:(unsigned long long)a6 deviceSubType:(unsigned long long)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementDeviceID:(id)a0;
- (id)copyWithReplacementDeviceName:(id)a0;
- (id)copyWithReplacementDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementDiscoveredOverInfra:(char)a0;
- (id)copyWithReplacementDiscoveredWithBroker:(char)a0;
- (id)copyWithReplacementHasAirplayProperties:(char)a0;
- (id)copyWithReplacementModelID:(id)a0;
- (id)exportAsDictionary;
- (id)initWithDeviceID:(id)a0 modelID:(id)a1 deviceName:(id)a2 hasAirplayProperties:(char)a3 discoveredOverInfra:(char)a4 discoveredWithBroker:(char)a5 deviceType:(unsigned long long)a6 deviceSubType:(unsigned long long)a7;
- (char)isEqualToAVOutputDeviceDO:(id)a0;

@end
