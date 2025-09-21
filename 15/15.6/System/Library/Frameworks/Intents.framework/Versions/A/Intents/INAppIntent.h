@class NSString, NSDictionary, LNAction;
@protocol INVCVoiceShortcutClient;

@interface INAppIntent : INIntent {
    long long _indexingHash;
    NSString *_launchId;
    NSString *_extensionBundleId;
}

@property (retain, nonatomic) id<INVCVoiceShortcutClient> voiceShortcutClient;
@property (readonly, copy, nonatomic) NSString *appIntentIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (readonly, nonatomic) LNAction *linkAction;

+ (char)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)_className;
- (id)_nonNilParameters;
- (id)_dictionaryRepresentation;
- (id)initWithJSONDictionary:(id)a0;
- (id)launchId;
- (id)_JSONDictionaryRepresentation;
- (id)_asMigratedAppIntent;
- (long long)_indexingHash;
- (void)_setExtensionBundleId:(id)a0;
- (void)_setLaunchId:(id)a0;
- (id)extensionBundleId;
- (id)initWithAppBundleIdentifier:(id)a0 appIntentIdentifier:(id)a1 serializedParameters:(id)a2;
- (id)initWithAppBundleIdentifier:(id)a0 extensionBundleIdentifier:(id)a1 appIntentIdentifier:(id)a2 serializedParameters:(id)a3;
- (id)initWithAppBundleIdentifier:(id)a0 linkAction:(id)a1 linkActionMetadata:(id)a2;
- (id)widgetPlistableRepresentation:(id *)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end
