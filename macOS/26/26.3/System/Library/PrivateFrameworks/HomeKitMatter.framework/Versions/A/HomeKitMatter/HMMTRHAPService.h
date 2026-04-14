@class NSNumber;

@interface HMMTRHAPService : HAPService

@property (retain, nonatomic) NSNumber *endpoint;
@property BOOL overriddenAsPrimary;

+ (id)chipPluginServiceForCharacteristic:(id)a0;

- (unsigned long long)serviceProperties;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 instanceID:(id)a1 parsedCharacteristics:(id)a2 serviceProperties:(unsigned long long)a3 linkedServices:(id)a4 endpoint:(id)a5;
- (void)setPrimary;

@end
