@class NSString, WFOnScreenContentServiceOptions;

@interface INGetOnScreenContentForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) WFOnScreenContentServiceOptions *serviceOptions;

+ (char)supportsSecureCoding;
+ (Class)responseClass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 serviceOptions:(id)a1;

@end
