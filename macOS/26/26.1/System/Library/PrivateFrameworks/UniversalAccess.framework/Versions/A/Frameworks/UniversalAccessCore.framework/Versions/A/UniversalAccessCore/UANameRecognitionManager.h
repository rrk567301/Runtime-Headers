@class AXUIClient, NSString;

@interface UANameRecognitionManager : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (void)_nameRecognitionSettingsDidUpdate;
- (void)_startNameRecognitionUIServer;
- (void)initializeManager;

@end
