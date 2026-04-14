@class NSString, NSDictionary;

@interface HMDHAPMetadataAssistantCharacteristic : HMFObject <HMFFastEncodable>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *readHAPCharacteristicName;
@property (retain, nonatomic) NSString *writeHAPCharacteristicName;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) BOOL supportsLocalization;
@property (retain, nonatomic) NSDictionary *values;
@property (retain, nonatomic) NSDictionary *outValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hmf_encodeForFastEncoder;
- (id)initWithFastEncodedData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 readHAPCharacteristic:(id)a1 writeHAPCharacteristic:(id)a2 format:(id)a3;

@end
