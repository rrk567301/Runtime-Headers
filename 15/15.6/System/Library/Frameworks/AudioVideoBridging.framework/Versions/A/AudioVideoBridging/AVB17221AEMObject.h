@interface AVB17221AEMObject : NSObject

+ (void)initialize;
+ (Class)classForDescriptorType:(unsigned short)a0;
+ (void)setClass:(Class)a0 asClassForDescriptorType:(unsigned short)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)plistRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlKey;
- (id)xmlRepresentation;

@end
