@class NSData;

@interface AVB17221AEMBodePlotEntry : AVB17221AEMObject <NSCopying>

@property (nonatomic) float frequency;
@property (nonatomic) float magnitude;
@property (nonatomic) float phase;
@property (readonly, copy, nonatomic) NSData *valueData;

- (unsigned long long)hash;
- (id)valueData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
