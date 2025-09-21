@interface AVB17221AEMStreamFormatTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)stringForNumber:(id)a0;
- (unsigned char)_acfMessageTypeFromString:(id)a0 isValid:(BOOL *)a1 stringUsed:(id *)a2;
- (id)_stringForACFMessageType:(unsigned char)a0 isValid:(BOOL)a1;
- (id)streamFormatFor618836String:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForAAFAES3String:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForAAFPCMString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForAvidString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForCRFString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForCVFMJPEGString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForIIDCString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForNTSCFString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForSDIString:(id)a0 headerVersion:(unsigned char)a1;
- (id)streamFormatForString:(id)a0;
- (id)streamFormatForTSCFString:(id)a0 headerVersion:(unsigned char)a1;
- (id)stringFor61883StreamFormat:(id)a0;
- (id)stringForAAFStreamFormat:(id)a0;
- (id)stringForAvidVendorStreamFormat:(id)a0;
- (id)stringForCRFStreamFormat:(id)a0;
- (id)stringForCVFStreamFormat:(id)a0;
- (id)stringForIIDCStreamFormat:(id)a0;
- (id)stringForNTSCFStreamFormat:(id)a0;
- (id)stringForRVFStreamFormat:(id)a0;
- (id)stringForSVFStreamFormat:(id)a0;
- (id)stringForStreamFormat:(id)a0;
- (id)stringForTSCFStreamFormat:(id)a0;
- (id)stringForVSFStreamFormat:(id)a0;

@end
