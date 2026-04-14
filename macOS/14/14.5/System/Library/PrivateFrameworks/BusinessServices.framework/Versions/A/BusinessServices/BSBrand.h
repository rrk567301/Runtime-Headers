@class BSBrandObjcShim, NSString, BSBrandMessagingDetails;

@interface BSBrand : NSObject {
    BSBrandMessagingDetails *_messagingDetails;
    long long _sandboxExtension;
}

@property (readonly, nonatomic) BOOL isAppleMainBrand;
@property (readonly, nonatomic) BOOL isAppleMakoBrand;
@property (readonly, nonatomic) BSBrandObjcShim *shim;
@property (readonly, nonatomic, getter=_primaryBrandColorHexString) NSString *primaryBrandColorHexString;
@property (readonly, nonatomic, getter=_secondaryBrandColorHexString) NSString *secondaryBrandColorHexString;
@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) BSBrandMessagingDetails *messagingDetails;

+ (id)placeholderName;

- (void).cxx_destruct;
- (void)clearCachedLogos:(id /* block */)a0;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_initWithShim:(id)a0;
- (void)logoFileURLForType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
