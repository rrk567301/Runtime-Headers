@class NSString;

@interface HAPMetadataTuple : HMFObject

@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *index;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCharacteristicType:(id)a0 serviceType:(id)a1;

@end
