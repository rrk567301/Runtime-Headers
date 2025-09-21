@class MCCSecretAgentController, NSString, NSObject;
@protocol OS_os_log;

@interface MUIPassKitAvatarProvider : NSObject <EFLoggable, MUIGenericAvatarProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MCCSecretAgentController *mccController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
