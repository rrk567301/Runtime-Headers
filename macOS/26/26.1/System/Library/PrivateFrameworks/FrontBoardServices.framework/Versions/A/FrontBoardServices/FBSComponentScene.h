@class NSString;

@interface FBSComponentScene : NSProxy <FBSComponentScene> {
    id _scene;
    Class _extension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isProxy;
- (id)clientSettings;
- (id)scene;
- (id)settings;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)sendActions:(id)a0;
- (Class)extension;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)loggingIdentifier;
- (Class)class;
- (BOOL)conformsToExtension:(Class)a0;
- (id)initWithScene:(id)a0 extension:(Class)a1;
- (id)remoteTargetForProtocol:(id)a0;
- (void)sendPrivateActions:(id)a0;
- (id)siblingComponentOfClass:(Class)a0;

@end
