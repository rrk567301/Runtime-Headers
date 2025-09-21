@class NSString, NSBundle;

@interface BSPluginBundle : NSObject <BSDescriptionProviding> {
    NSBundle *_bundle;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
}

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic, getter=isLoaded) char loaded;
@property (readonly, nonatomic) Class principalClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (char)loadPlugin;
- (char)loadPlugin:(id /* block */)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
