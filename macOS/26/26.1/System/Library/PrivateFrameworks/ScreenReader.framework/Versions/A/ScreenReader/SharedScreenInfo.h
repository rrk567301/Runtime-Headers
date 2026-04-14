@class NSString, SCRApplication, SCRSharedScreen;

@interface SharedScreenInfo : NSObject

@property (nonatomic) unsigned int clientPort;
@property (retain, nonatomic) NSString *remoteId;
@property (retain, nonatomic) NSString *remoteName;
@property (retain, nonatomic) SCRApplication *app;
@property (retain, nonatomic) SCRSharedScreen *element;
@property (nonatomic) BOOL modalSessionEnabled;
@property (nonatomic) BOOL serverInShadowMode;

- (void).cxx_destruct;
- (id)init;

@end
