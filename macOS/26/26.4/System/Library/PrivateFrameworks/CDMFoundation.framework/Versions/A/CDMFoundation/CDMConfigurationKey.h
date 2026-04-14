@class NSString;

@interface CDMConfigurationKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *assetDirPath;
@property (retain, nonatomic) NSString *embeddingVersion;
@property (retain, nonatomic) NSString *vocabOverridesHash;
@property (retain, nonatomic) NSString *vocabSandboxId;
@property (retain, nonatomic) NSString *mentionOverridesHash;
@property (retain, nonatomic) NSString *contextualOverridesHash;
@property (retain, nonatomic) NSString *serviceStateDirectory;

+ (id)configurationKeyForDynamicConfig:(id)a0;
+ (id)hashOverrideSpans:(id)a0;
+ (id)sha256Hash:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isStringProperty:(id)a0 equalToString:(id)a1;
- (id)debugStringForServiceName:(id)a0;

@end
