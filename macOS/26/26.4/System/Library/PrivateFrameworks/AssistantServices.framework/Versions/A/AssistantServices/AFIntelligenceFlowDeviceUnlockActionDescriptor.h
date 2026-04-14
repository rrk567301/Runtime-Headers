@class NSString;

@interface AFIntelligenceFlowDeviceUnlockActionDescriptor : NSObject <AFIntelligenceFlowActionDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deviceUnlockStatus;
@property (retain, nonatomic) NSString *responseId;
@property (nonatomic) unsigned long long behaviorOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
