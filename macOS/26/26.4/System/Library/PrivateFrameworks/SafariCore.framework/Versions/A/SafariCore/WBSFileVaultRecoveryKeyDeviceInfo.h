@class NSString, NSDictionary;

@interface WBSFileVaultRecoveryKeyDeviceInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *variant;
@property (readonly, copy, nonatomic) NSString *deviceTypeIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSerialNumber:(id)a0 model:(id)a1 variant:(id)a2 deviceTypeIdentifier:(id)a3;

@end
