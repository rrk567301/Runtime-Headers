@class NSString, NSNumber;

@interface AMSUIWebRestrictedFeatureAction : AMSUIWebAction

@property (retain) NSString *identifier;
@property (retain) NSNumber *enabled;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
