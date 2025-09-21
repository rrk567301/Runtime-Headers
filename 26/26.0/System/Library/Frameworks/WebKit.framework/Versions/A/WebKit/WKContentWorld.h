@class NSString, _WKUserContentWorld;

@interface WKContentWorld : NSObject <WKObject> {
    struct AlignedStorage<API::ContentWorld, 8UL> { struct Storage { unsigned char data[64]; } m_storage; } _contentWorld;
}

@property (class, readonly, nonatomic) WKContentWorld *pageWorld;
@property (class, readonly, nonatomic) WKContentWorld *defaultClientWorld;

@property (readonly, copy, nonatomic) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_worldWithConfiguration:(id)a0;
+ (id)worldWithName:(id)a0;

- (void)dealloc;

@end
