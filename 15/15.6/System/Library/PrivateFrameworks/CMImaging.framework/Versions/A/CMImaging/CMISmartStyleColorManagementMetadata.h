@interface CMISmartStyleColorManagementMetadata : NSObject

@property (nonatomic) int yccMatrixType;
@property (nonatomic) struct { int colorPrimaries; int transferFunction; float transferFunctionGamma; } colorSpace;
@property (nonatomic) char cscYCCConversionEnabled;
@property (nonatomic) char cscTransferFunctionEnabled;

- (id)init;

@end
