@class NSString;

@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider>

@property char settingsUIVisible;
@property (readonly, copy, nonatomic) NSString *paneStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectToDaemon;

@end
