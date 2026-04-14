@class AVB17221AEMSamplingRate;

@interface AVB17221AEMSamplingRateRange : AVB17221AEMObject <NSCopying>

@property (copy) AVB17221AEMSamplingRate *minimumRate;
@property (copy) AVB17221AEMSamplingRate *maximumRate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
