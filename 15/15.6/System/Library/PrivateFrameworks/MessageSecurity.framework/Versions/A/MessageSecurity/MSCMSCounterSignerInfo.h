@class MSCMSSignerInfo;

@interface MSCMSCounterSignerInfo : MSCMSSignerInfo

@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo;

- (void).cxx_destruct;
- (id)calculateSignerInfoDigest:(id *)a0;
- (id)certificates;
- (char)createRequiredAttributes:(id *)a0;
- (char)verifyContentTypeAttribute:(id *)a0;

@end
