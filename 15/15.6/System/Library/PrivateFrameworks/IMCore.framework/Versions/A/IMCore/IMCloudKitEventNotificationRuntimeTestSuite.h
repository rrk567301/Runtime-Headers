@class NSString, IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler>

@property char shouldTearDown;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runTestsIfNeeded;

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (void)setUp;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;

@end
