@class NSString, CCSiriCompanionContextAudioContentMediaCategoriesRepeatedEnum;

@interface CCSiriCompanionContextAudioContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) CCSiriCompanionContextAudioContentMediaCategoriesRepeatedEnum *mediaCategories;
@property (readonly, nonatomic) unsigned int subscriptionStatus;
@property (readonly, nonatomic) NSString *localizedAppName;
@property (readonly, nonatomic) int nowPlayingCount;
@property (nonatomic) BOOL hasNowPlayingCount;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAppBundleId:(id)a0 mediaCategories:(id)a1 subscriptionStatus:(unsigned int)a2 localizedAppName:(id)a3 nowPlayingCount:(id)a4 error:(id *)a5;

@end
