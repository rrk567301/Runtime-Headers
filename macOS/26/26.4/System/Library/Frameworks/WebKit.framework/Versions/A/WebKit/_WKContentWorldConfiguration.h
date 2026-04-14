@class NSString;

@interface _WKContentWorldConfiguration : NSObject <WKObject, NSCopying, NSSecureCoding> {
    struct AlignedStorage<API::ContentWorldConfiguration, 8UL> { struct Storage { unsigned char data[32]; } m_storage; } _worldConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL allowAccessToClosedShadowRoots;
@property (nonatomic) BOOL allowAutofill;
@property (nonatomic) BOOL allowElementUserInfo;
@property (nonatomic) BOOL disableLegacyBuiltinOverrides;
@property (nonatomic) BOOL allowJSHandleCreation;
@property (nonatomic) BOOL allowNodeSerialization;
@property (nonatomic, getter=isInspectable) BOOL inspectable;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct Ref<API::ContentWorldConfiguration, WTF::RawPtrTraits<API::ContentWorldConfiguration>, WTF::DefaultRefDerefTraits<API::ContentWorldConfiguration>> { struct ContentWorldConfiguration *x0; })_protectedWorldConfiguration;

@end
