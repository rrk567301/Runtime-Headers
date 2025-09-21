@class NSString;

@interface FBSComponentScene : NSProxy <FBSComponentScene> {
    id _scene;
    Class _extension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isProxy;
- (Class)class;
- (char)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (char)isMemberOfClass:(Class)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (Class)extension;
- (id)settings;
- (id)scene;
- (id)loggingIdentifier;
- (id)clientSettings;
- (char)conformsToExtension:(Class)a0;
- (id)initWithScene:(id)a0 extension:(Class)a1;
- (void)sendActions:(id)a0;
- (void)sendPrivateActions:(id)a0;
- (id)siblingComponentOfClass:(Class)a0;

@end
