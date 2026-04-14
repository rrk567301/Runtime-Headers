@class SUMajorProduct, NSString, NSImage, NSDate;

@interface SUOSUMajorProduct : SUOSUProduct

@property (retain) NSDate *_adminDeferredDate;
@property BOOL _adminDeferred;
@property (readonly) SUMajorProduct *majorProduct;
@property (readonly) NSString *majorOSDisplayTitle;
@property (readonly) NSString *majorOSBundleIdentifier;
@property (readonly) NSString *majorOSDisplayVersion;
@property (readonly) NSString *majorOSMoreInfoLinkString;
@property (readonly) NSString *majorOSNotificationBodyString;
@property (readonly) NSString *majorOSNotificationTitleString;
@property (readonly) NSImage *majorOSIconImage;
@property (readonly) BOOL isAdminDeferred;
@property (readonly) BOOL majorOSNotificationsEnabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)installerApplicationBundleURLOnDisk;
- (id)initWithUpdateProduct:(id)a0 withMajorProduct:(id)a1;
- (id)initWithUpdateProduct:(id)a0;
- (void)updateMajorProduct:(id)a0;
- (id)initWithAppStoreUpdate:(id)a0 withMajorProduct:(id)a1;
- (id)initWithAppStoreUpdate:(id)a0;
- (id)deferralEnablementDate;

@end
