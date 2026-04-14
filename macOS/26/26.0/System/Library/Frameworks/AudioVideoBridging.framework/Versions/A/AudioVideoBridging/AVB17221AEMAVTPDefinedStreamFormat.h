@interface AVB17221AEMAVTPDefinedStreamFormat : AVB17221AEMStreamFormat

@property (readonly) unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (void)setSubtype:(unsigned char)a0;
- (unsigned char)subtype;

@end
