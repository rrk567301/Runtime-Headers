@class NSString, NSDictionary;

@interface WBSFileVaultRecoveryKeyDeviceInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *variant;
@property (readonly, copy, nonatomic) NSString *deviceTypeIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerialNumber:(id)a0 model:(id)a1 variant:(id)a2 deviceTypeIdentifier:(id)a3;

@end
