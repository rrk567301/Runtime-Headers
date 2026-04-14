@class NSString;

@interface AFSiriXDirectActionDescriptor : NSObject <AFIntelligenceFlowActionDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long behaviorOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
