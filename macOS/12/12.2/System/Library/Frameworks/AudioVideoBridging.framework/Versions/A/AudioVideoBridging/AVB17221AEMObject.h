@interface AVB17221AEMObject : NSObject

+ (void)initialize;
+ (Class)classForDescriptorType:(unsigned short)a0;
+ (void)setClass:(Class)a0 asClassForDescriptorType:(unsigned short)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)xmlKey;
- (id)debugLogStringWithIndentation:(id)a0;

@end
