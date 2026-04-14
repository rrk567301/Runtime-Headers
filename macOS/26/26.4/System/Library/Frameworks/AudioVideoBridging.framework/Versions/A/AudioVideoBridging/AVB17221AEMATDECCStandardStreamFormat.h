@interface AVB17221AEMATDECCStandardStreamFormat : AVB17221AEMATDECCDefinedStreamFormat

@property unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (unsigned char)subtype;
- (void)setSubtype:(unsigned char)a0;
- (id)init;

@end
