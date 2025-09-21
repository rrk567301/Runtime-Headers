@class NSString, CHSExtensionIdentity, CHSControlActionMetadata, CHSIntentReference;

@interface CHSControlDescriptor : CHSBaseDescriptor <NSMutableCopying, CHSWidgetIdentifiable, CHSConfigurableDescriptor, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hiddenControl;
@property (readonly, nonatomic) char disablesControlStateCaching;
@property (readonly, nonatomic) unsigned long long controlVersion;
@property (readonly, nonatomic) long long visibility;
@property (readonly, copy, nonatomic) NSString *actionIntentType;
@property (readonly, nonatomic) unsigned long long controlType;
@property (readonly, nonatomic) unsigned long long preferredControlSize;
@property (readonly, nonatomic) CHSControlActionMetadata *actionMetadata;
@property (readonly, nonatomic) char supportsPush;
@property (readonly, nonatomic) char showsContextualMenu;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, copy, nonatomic) CHSIntentReference *defaultIntentReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)isInternal;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 controlType:(unsigned long long)a2 intentType:(id)a3;
- (id)_intentDescription;
- (id)copyWithoutIntents;
- (char)hasIntents;
- (id)initFromDescriptor:(id)a0 includeIntents:(char)a1;

@end
