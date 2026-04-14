@class NSString, CHSExtensionIdentity, CHSControlActionMetadata, CHSIntentReference;

@interface CHSControlDescriptor : CHSBaseDescriptor <NSMutableCopying, CHSWidgetIdentifiable, CHSConfigurableDescriptor, NSSecureCoding> {
    BOOL _supportsForwardingToRemoteDevices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hiddenControl;
@property (readonly, nonatomic) BOOL supportsForwardingToRemoteDevices;
@property (readonly, nonatomic) BOOL disablesControlStateCaching;
@property (readonly, nonatomic) unsigned long long controlVersion;
@property (readonly, nonatomic) long long visibility;
@property (readonly, copy, nonatomic) NSString *actionIntentType;
@property (readonly, nonatomic) unsigned long long controlType;
@property (readonly, nonatomic) unsigned long long preferredControlSize;
@property (readonly, nonatomic) CHSControlActionMetadata *actionMetadata;
@property (readonly, nonatomic) BOOL supportsPush;
@property (readonly, nonatomic) BOOL showsContextualMenu;
@property (readonly, nonatomic) unsigned long long disfavoredLocations;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, copy, nonatomic) CHSIntentReference *defaultIntentReference;
@property (readonly, nonatomic, getter=isConfigurable) BOOL configurable;

- (BOOL)isInternal;
- (BOOL)matches:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHidden;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 controlType:(unsigned long long)a2 intentType:(id)a3;
- (id)_intentDescription;
- (id)copyWithoutIntents;
- (BOOL)hasIntents;
- (id)initFromDescriptor:(id)a0 includeIntents:(BOOL)a1;

@end
