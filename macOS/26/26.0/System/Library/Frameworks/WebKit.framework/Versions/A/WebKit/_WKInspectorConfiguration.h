@class NSString, WKProcessPool;

@interface _WKInspectorConfiguration : NSObject <WKObject, NSCopying> {
    struct AlignedStorage<API::InspectorConfiguration, 8UL> { struct Storage { unsigned char data[40]; } m_storage; } _configuration;
}

@property (retain, nonatomic) WKProcessPool *processPool;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)applyToWebViewConfiguration:(id)a0;
- (void)setURLSchemeHandler:(id)a0 forURLScheme:(id)a1;

@end
