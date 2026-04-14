@class AVB17221AEMSamplingRate;

@interface AVB17221AEMSamplingRateRange : AVB17221AEMObject <NSCopying>

@property (copy) AVB17221AEMSamplingRate *minimumRate;
@property (copy) AVB17221AEMSamplingRate *maximumRate;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
