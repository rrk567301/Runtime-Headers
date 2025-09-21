@interface AVB17221AEMATDECCStandardStreamFormat : AVB17221AEMATDECCDefinedStreamFormat

@property unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (void)setSubtype:(unsigned char)a0;
- (id)init;
- (unsigned char)subtype;

@end
