@class NSString, AAInheritanceController, CIImage;
@protocol AAInheritanceContactInfo;

@interface AAInheritanceContactController : NSObject {
    long long _contactType;
    AAInheritanceController *_inheritanceController;
    id<AAInheritanceContactInfo> _contactInfo;
    CIImage *_accessKeyQRCodeImage;
}

@property (readonly, nonatomic) NSString *claimTokenString;
@property (readonly, nonatomic) NSString *accessKeyString;

- (void).cxx_destruct;
- (id)initWithContactInfo:(id)a0 contactType:(long long)a1;
- (id)accessKeyQRCodeImageDataWithSize:(double)a0;
- (id)_accessKeyQRCodeImage;
- (void)removeContactAsBeneficiaryWithCompletion:(id /* block */)a0;
- (void)removeContactAsBenefactorWithCompletion:(id /* block */)a0;
- (void)sendInvitationWithCompletion:(id /* block */)a0;

@end
