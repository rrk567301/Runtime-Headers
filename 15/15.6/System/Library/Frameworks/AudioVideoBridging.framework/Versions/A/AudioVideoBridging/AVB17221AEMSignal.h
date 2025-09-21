@interface AVB17221AEMSignal : AVB17221AEMObject <NSCopying>

@property unsigned short signalType;
@property unsigned short signalIndex;
@property unsigned short signalOutput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
