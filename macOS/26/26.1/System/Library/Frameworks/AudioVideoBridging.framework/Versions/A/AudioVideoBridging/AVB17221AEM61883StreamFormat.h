@interface AVB17221AEM61883StreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char headerVersion;
@property (readonly) unsigned char fmt;

+ (id)keyPathsForValuesAffectingFmt;
+ (id)keyPathsForValuesAffectingHeaderVersion;

- (unsigned char)fmt;
- (id)init;
- (void)setFmt:(unsigned char)a0;

@end
