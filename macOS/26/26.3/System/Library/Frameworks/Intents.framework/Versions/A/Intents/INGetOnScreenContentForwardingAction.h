@class NSString, WFOnScreenContentServiceOptions;

@interface INGetOnScreenContentForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) WFOnScreenContentServiceOptions *serviceOptions;

+ (Class)responseClass;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 serviceOptions:(id)a1;

@end
