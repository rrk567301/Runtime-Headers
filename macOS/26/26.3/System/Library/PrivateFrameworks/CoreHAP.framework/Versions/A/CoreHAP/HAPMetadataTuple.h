@class NSString;

@interface HAPMetadataTuple : HMFObject <HMFFastEncodable>

@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCharacteristicType:(id)a0 serviceType:(id)a1;
- (void).cxx_destruct;
- (id)hmf_encodeForFastEncoder;
- (id)initWithFastEncodedData:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
