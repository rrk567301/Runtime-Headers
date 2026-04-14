@class NSString;

@interface AFIntelligenceFlowLocationPermissionActionDescriptor : NSObject <AFIntelligenceFlowActionDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long authorizationStyle;
@property (nonatomic) unsigned long long behaviorOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationStyle:(unsigned long long)a0;

@end
