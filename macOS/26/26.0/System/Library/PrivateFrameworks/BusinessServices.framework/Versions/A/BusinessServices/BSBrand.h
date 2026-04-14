@class BSBrandMessagingDetails, NSString, BSBrandObjcShim, NSURL;

@interface BSBrand : NSObject {
    BSBrandMessagingDetails *_messagingDetails;
    long long _sandboxExtension;
}

@property (readonly, nonatomic) BOOL isAppleMainBrand;
@property (readonly, nonatomic) BOOL isAppleMakoBrand;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSURL *deepLinkURL;
@property (readonly, nonatomic) NSURL *fallBackURL;
@property (readonly, nonatomic) NSURL *logoURL;
@property (readonly, nonatomic) NSString *companyID;
@property (readonly, nonatomic) NSString *businessID;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic, getter=_primaryBrandColorHexString) NSString *primaryBrandColorHexString;
@property (readonly, nonatomic, getter=_secondaryBrandColorHexString) NSString *secondaryBrandColorHexString;
@property (readonly, nonatomic) BSBrandObjcShim *shim;
@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) long long brandType;
@property (readonly, nonatomic) BOOL isRCSChatBot;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) NSURL *primaryLogoURL;
@property (readonly, nonatomic) NSURL *secondaryLogoURL;
@property (readonly, nonatomic) BSBrandMessagingDetails *messagingDetails;
@property (readonly, nonatomic) NSString *localizedResponseTime;

+ (id)placeholderName;
+ (id)mockBrand;

- (id)website;
- (id)categories;
- (id)emailAddress;
- (id)localizedDescription;
- (id)address;
- (void).cxx_destruct;
- (id)verifiedBy;
- (id)termsAndConditionsURL;
- (id)messageNumber;
- (id)logoFingerprint;
- (void)clearCachedAssets:(id /* block */)a0;
- (id)genericCSSTemplateURL;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 fingerprint:(id)a2 completion:(id /* block */)a3;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 usingSim:(id)a2 completion:(id /* block */)a3;
- (id)brandInfo;
- (id)_initWithShim:(id)a0;
- (void)assetDataForType:(long long)a0 usingSim:(id)a1 completion:(id /* block */)a2;
- (void)clearCachedLogos:(id /* block */)a0;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)logoFileURLForType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)permissions:(id)a0 completion:(id /* block */)a1;

@end
