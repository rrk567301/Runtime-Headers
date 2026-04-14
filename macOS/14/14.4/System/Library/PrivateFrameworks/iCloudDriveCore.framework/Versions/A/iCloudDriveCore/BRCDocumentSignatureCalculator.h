@interface BRCDocumentSignatureCalculator : NSObject

+ (id)calculateSignatureForURL:(id)a0 error:(id *)a1;
+ (id)_calculateSignatureForFileAtURL:(id)a0 error:(id *)a1;
+ (id)_calculateSignatureForPackageAtURL:(id)a0 error:(id *)a1;

@end
