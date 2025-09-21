@class NSData;

@interface AVB17221AEMBodePlotEntry : AVB17221AEMObject <NSCopying>

@property (nonatomic) float frequency;
@property (nonatomic) float magnitude;
@property (nonatomic) float phase;
@property (readonly, copy, nonatomic) NSData *valueData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)valueData;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
