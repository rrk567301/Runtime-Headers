@class NSData;

@interface AVB17221AEMMemoryObjectData : AVB17221AEMMemoryObject

@property (copy) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
