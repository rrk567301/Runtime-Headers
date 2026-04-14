@class SCRTaskIdentifier, NSString, SCRTaskHandler, NSMutableDictionary, SCRTaskTargetConfiguration, SCRSchedulingConfiguration;

@interface SCRTask : NSObject <BSDescriptionProviding, NSCopying, SCRSchedulable> {
    NSMutableDictionary *_attributes;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ workItem;
@property (retain, nonatomic) SCRTaskIdentifier *identifier;
@property (copy, nonatomic) SCRTaskHandler *taskHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy) SCRSchedulingConfiguration *schedulingConfiguration;
@property (copy) SCRTaskTargetConfiguration *targetConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)attributeForKey:(id)a0;
- (void)addAttribute:(id)a0 withKey:(id)a1;
- (void)removeAttributeWithKey:(id)a0;

@end
