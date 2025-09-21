@class NSString, NSURL, NSArray;

@interface MSVSystemDialogOptions : NSObject

@property (copy, nonatomic) NSString *alertHeader;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) NSURL *alertIconURL;
@property (copy, nonatomic) NSArray *allowedApplicationBundleIDs;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) char showAsTopmost;
@property (nonatomic) char forceModalAlertAppearance;
@property (nonatomic) char showOnLockscreen;
@property (nonatomic) char dismissOverlaysOnLockscreen;

- (void).cxx_destruct;

@end
