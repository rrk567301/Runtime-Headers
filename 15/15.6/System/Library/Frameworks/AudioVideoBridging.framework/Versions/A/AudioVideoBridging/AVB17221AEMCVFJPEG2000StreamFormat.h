@interface AVB17221AEMCVFJPEG2000StreamFormat : AVB17221AEMCVFStreamFormat

@property (getter=isProgressiveScan) char progressiveScan;

+ (id)keyPathsForValuesAffectingProgressiveScan;

- (id)init;
- (unsigned int)maximumPDUSize;

@end
