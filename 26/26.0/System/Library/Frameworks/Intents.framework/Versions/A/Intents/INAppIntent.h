@class NSString, NSDictionary, LNAction;
@protocol INVCVoiceShortcutClient;

@interface INAppIntent : INIntent {
    long long _indexingHash;
    NSString *_launchId;
    NSString *_extensionBundleId;
}

@property (class, copy) id /* block */ INVCVoiceShortcutClientCreationBlock;

@property (retain, nonatomic) id<INVCVoiceShortcutClient> voiceShortcutClient;
@property (readonly, copy, nonatomic) NSString *appIntentIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (readonly, nonatomic) LNAction *linkAction;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_hasTitle;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)description;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)extensionBundleId;
- (id)launchId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_className;
- (id)_nonNilParameters;
- (id)initWithJSONDictionary:(id)a0;
- (id)_JSONDictionaryRepresentation;
- (id)_asMigratedAppIntent;
- (long long)_indexingHash;
- (void)_setExtensionBundleId:(id)a0;
- (void)_setLaunchId:(id)a0;
- (id)_subtitleForLanguage:(id)a0;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_titleForLanguage:(id)a0;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)initWithAppBundleIdentifier:(id)a0 appIntentIdentifier:(id)a1 serializedParameters:(id)a2;
- (id)initWithAppBundleIdentifier:(id)a0 extensionBundleIdentifier:(id)a1 appIntentIdentifier:(id)a2 serializedParameters:(id)a3;
- (id)initWithAppBundleIdentifier:(id)a0 linkAction:(id)a1 linkActionMetadata:(id)a2;
- (BOOL)isRetryableError:(id)a0;
- (id)widgetPlistableRepresentation:(id *)a0;

@end
