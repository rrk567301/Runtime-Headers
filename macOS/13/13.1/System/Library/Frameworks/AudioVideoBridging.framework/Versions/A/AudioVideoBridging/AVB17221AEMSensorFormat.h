@interface AVB17221AEMSensorFormat : AVB17221AEMObject <NSCopying>

@property unsigned long long sensorFormat;
@property BOOL vendorFormat;
@property unsigned char subtype;
@property unsigned char protocolType;
@property unsigned long long cfi;
@property unsigned int oui24;
@property unsigned long long vendorFormat24;
@property unsigned long long oui36;
@property unsigned int vendorFormat36;

+ (id)keyPathsForValuesAffectingVendorFormat;
+ (id)keyPathsForValuesAffectingSubtype;
+ (id)keyPathsForValuesAffectingProtocolType;
+ (id)keyPathsForValuesCfi;
+ (id)keyPathsForValuesAffectingOui24;
+ (id)keyPathsForValuesAffectingVendorFormat24;
+ (id)keyPathsForValuesAffectingOui36;
+ (id)keyPathsForValuesAffectingVendorFormat36;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)subtype;
- (void)setSubtype:(unsigned char)a0;
- (unsigned char)protocolType;
- (void)setProtocolType:(unsigned char)a0;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (void)setVendorFormat:(BOOL)a0;
- (BOOL)vendorFormat;
- (void)setCfi:(unsigned long long)a0;
- (unsigned long long)cfi;
- (void)setOui24:(unsigned int)a0;
- (unsigned int)oui24;
- (void)setVendorFormat24:(unsigned long long)a0;
- (unsigned long long)vendorFormat24;
- (void)setOui36:(unsigned long long)a0;
- (unsigned long long)oui36;
- (void)setVendorFormat36:(unsigned int)a0;
- (unsigned int)vendorFormat36;

@end
