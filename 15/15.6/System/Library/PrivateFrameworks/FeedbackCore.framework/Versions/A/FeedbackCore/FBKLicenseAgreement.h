@class NSAttributedString;

@interface FBKLicenseAgreement : NSObject

@property (class, readonly, nonatomic) NSAttributedString *currentLicenseAgreement;
@property (class, readonly, nonatomic) char hasAgreedToCurrentLicenseAgreement;

+ (void)agreeToCurrentLicenseAgreement;

@end
