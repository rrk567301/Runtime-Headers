@interface AVB17221AEMATDECCStandardStreamFormat : AVB17221AEMATDECCDefinedStreamFormat

@property unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (void)setSubtype:(unsigned char)a0;
- (unsigned char)subtype;
- (id)init;

@end
