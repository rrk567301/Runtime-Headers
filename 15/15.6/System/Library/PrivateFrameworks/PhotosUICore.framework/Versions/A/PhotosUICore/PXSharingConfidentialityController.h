@class NSString;

@interface PXSharingConfidentialityController : NSObject

@property (class, readonly, nonatomic) char confidentialityCheckRequired;
@property (class, readonly, nonatomic) NSString *confidentialityWarningTitle;
@property (class, readonly, nonatomic) NSString *confidentialityWarningMessage;
@property (class, readonly, nonatomic) NSString *confidentialFeatureWarningMessage;

+ (char)confidentialWarningRequiredForAsset:(id)a0;
+ (char)confidentialWarningRequiredForAssetReferences:(id)a0;
+ (char)confidentialWarningRequiredForAssets:(id)a0;
+ (char)confidentialWarningRequiredForShareableSelection:(id)a0;

@end
