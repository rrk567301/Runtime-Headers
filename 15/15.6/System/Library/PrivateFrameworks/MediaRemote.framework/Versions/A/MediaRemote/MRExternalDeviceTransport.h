@class NSString, NSArray, MRDeviceInfo, NSError;

@interface MRExternalDeviceTransport : NSObject

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) char requiresCustomPairing;
@property (nonatomic) char shouldUseSystemAuthenticationPrompt;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char supportsIdleDisconnection;
@property (readonly, nonatomic) char supportsReconnection;
@property (readonly, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) NSArray *allowedPlayerPaths;

- (void).cxx_destruct;
- (void)resetWithError:(id)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void)setShouldUseSystemAuthenticationPrompt:(char)a0;
- (char)shouldUseSystemAuthenticationPrompt;

@end
