@class NSString;

@interface FBSComponentScene : NSProxy <FBSComponentScene> {
    id _scene;
    Class _extension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scene;
- (BOOL)isKindOfClass:(Class)a0;
- (id)loggingIdentifier;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)extension;
- (id)settings;
- (BOOL)isProxy;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)clientSettings;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)sendActions:(id)a0;
- (Class)class;
- (BOOL)conformsToExtension:(Class)a0;
- (id)initWithScene:(id)a0 extension:(Class)a1;
- (id)remoteTargetForProtocol:(id)a0;
- (void)sendPrivateActions:(id)a0;
- (id)siblingComponentOfClass:(Class)a0;

@end
