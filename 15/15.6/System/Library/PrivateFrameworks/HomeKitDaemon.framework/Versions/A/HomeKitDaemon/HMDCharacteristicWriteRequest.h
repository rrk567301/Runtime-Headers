@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSData *authorizationData;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) char includeResponseValue;
@property (readonly, nonatomic) NSData *contextData;

+ (id)logCategory;
+ (id)writeRequestForTransitionFetchWithLightProfile:(id)a0;
+ (id)writeRequestForTransitionStartWithLightProfile:(id)a0 naturalLightingEnabled:(char)a1 startDate:(id)a2 type:(unsigned long long)a3;
+ (id)writeRequestForTransitionStartWithLightProfile:(id)a0 naturalLightingEnabled:(char)a1 startDate:(id)a2 type:(unsigned long long)a3 dataSource:(id)a4;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4 includeResponseValue:(char)a5;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4 includeResponseValue:(char)a5 contextData:(id)a6;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 type:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4 includeResponseValue:(char)a5 contextData:(id)a6;

@end
