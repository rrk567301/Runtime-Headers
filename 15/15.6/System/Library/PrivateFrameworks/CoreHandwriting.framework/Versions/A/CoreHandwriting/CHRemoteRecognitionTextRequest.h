@class NSArray, NSDictionary, NSSet;

@interface CHRemoteRecognitionTextRequest : CHRemoteRecognitionRequest

@property (copy, nonatomic) NSArray *locales;
@property (copy, nonatomic) NSDictionary *activeCharacterSetPerLocale;
@property (nonatomic) int recognitionMode;
@property (nonatomic) int contentType;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (nonatomic) char shouldUseTextReplacements;
@property (nonatomic) char enableGen2ModelIfAvailable;
@property (nonatomic) char enableGen2CharacterLMIfAvailable;
@property (nonatomic) char enableStrokeReordering;
@property (readonly, nonatomic) char shouldRemoveUnnaturalGaps;
@property (copy, nonatomic) NSDictionary *parametersOverride;
@property (copy, nonatomic) NSSet *customLexiconEntries;

+ (char)supportsSecureCoding;
+ (id)loadFromFile:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocales:(id)a0 recognitionMode:(int)a1 drawing:(id)a2 options:(id)a3 priority:(long long)a4;
- (char)isEqualToRemoteRecognitionTextRequest:(id)a0;
- (id)recognizerConfigurationKeyWithLocale:(id)a0;

@end
