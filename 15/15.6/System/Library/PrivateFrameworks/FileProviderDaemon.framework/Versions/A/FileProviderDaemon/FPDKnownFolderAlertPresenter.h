@class NSString;

@interface FPDKnownFolderAlertPresenter : NSObject {
    NSString *_providerBundleIdentifier;
}

@property (readonly, nonatomic) NSString *providerDisplayName;
@property (readonly, nonatomic) char isiCloudDriveProvider;

- (void).cxx_destruct;
- (struct CGImage { } *)cautionBadgeWithImage:(id)a0;
- (id)getIconURLWithCautionBadge:(char)a0;
- (id)initWithProviderDomain:(id)a0;
- (char)presentAlertWithUserAprovalToContinue;

@end
