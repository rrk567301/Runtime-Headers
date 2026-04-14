@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {
    struct AlignedStorage<WebKit::InjectedBundleScriptWorld, 8UL> { struct Storage { unsigned char data[40]; } m_storage; } _world;
}

@property (readonly) void *_scriptWorld;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)world;
+ (id)normalWorld;

- (void)dealloc;
- (void)disableOverrideBuiltinsBehavior;
- (void)clearWrappers;
- (void)exposeClosedShadowRootsForExtensions;
- (void)makeAllShadowRootsOpen;

@end
