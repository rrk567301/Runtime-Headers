@class NSString, AFSettingsConnection;

@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging>

@property (readonly) AFSettingsConnection *settingsConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithSettingsConnection:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end
