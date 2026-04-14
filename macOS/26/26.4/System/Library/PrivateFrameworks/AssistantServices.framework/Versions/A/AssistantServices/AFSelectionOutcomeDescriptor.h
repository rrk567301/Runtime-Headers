@class NSData, NSString;

@interface AFSelectionOutcomeDescriptor : NSObject <AFIntelligenceFlowActionDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *valueData;
@property (nonatomic) unsigned long long behaviorOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
