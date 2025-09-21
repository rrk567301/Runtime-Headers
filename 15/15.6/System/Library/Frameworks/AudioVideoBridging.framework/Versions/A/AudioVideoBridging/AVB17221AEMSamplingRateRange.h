@class AVB17221AEMSamplingRate;

@interface AVB17221AEMSamplingRateRange : AVB17221AEMObject <NSCopying>

@property (copy) AVB17221AEMSamplingRate *minimumRate;
@property (copy) AVB17221AEMSamplingRate *maximumRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
