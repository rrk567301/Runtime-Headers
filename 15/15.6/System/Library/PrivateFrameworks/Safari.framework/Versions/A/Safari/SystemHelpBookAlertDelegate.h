@class NSString;

@interface SystemHelpBookAlertDelegate : NSObject <NSAlertDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (char)alertShowHelp:(id)a0;

@end
