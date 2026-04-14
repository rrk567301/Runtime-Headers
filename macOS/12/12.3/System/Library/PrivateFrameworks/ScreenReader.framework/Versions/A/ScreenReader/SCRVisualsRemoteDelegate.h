@class SCRVisualsMenuWindow, NSString;

@interface SCRVisualsRemoteDelegate : NSObject <AXVisualsAgentDelegateInterface>

@property (retain, nonatomic) SCRVisualsMenuWindow *menuWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)voiceOverBuiltInFeatureIdentifiers;

@end
