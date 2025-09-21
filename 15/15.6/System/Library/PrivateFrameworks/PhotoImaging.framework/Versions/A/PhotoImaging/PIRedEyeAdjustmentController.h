@class NSArray;

@interface PIRedEyeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *inputCorrectionInfo;

+ (id)inputCorrectionInfoKey;

- (char)hasCorrections;
- (id)pasteKeysForMediaType:(long long)a0;

@end
