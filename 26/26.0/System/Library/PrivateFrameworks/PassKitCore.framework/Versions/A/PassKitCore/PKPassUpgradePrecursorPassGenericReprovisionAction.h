@interface PKPassUpgradePrecursorPassGenericReprovisionAction : PKPassUpgradePrecursorPassAction

@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) BOOL deviceProvisioningDataExpected;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_dictionaryRepresentationInto:(id)a0;
- (id)initWithDeviceProvisioningDataExpected:(BOOL)a0;
- (id)initWithSubtype:(unsigned long long)a0 deviceProvisioningDataExpected:(BOOL)a1;

@end
