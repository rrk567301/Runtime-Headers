@interface AVB17221AEMATDECCStandardStreamFormat : AVB17221AEMATDECCDefinedStreamFormat

@property unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (id)init;
- (void)setSubtype:(unsigned char)a0;
- (unsigned char)subtype;

@end
