@class NSString, NSURL;

@interface AMSUIWebAppViewModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSString *accessibilityLabel;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSURL *iconURL;
@property (retain) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateJSObject:(id)a0;

@end
