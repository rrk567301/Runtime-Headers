@class NSString, NSNumber;

@interface AFVoiceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long gender;
@property (readonly, nonatomic) char wasInitializedFromDictionaryRepresentation;
@property (readonly, nonatomic) NSString *languageCode;
@property (nonatomic) char isCustom;
@property (readonly, nonatomic) long long footprint;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *contentVersion;
@property (readonly, nonatomic) NSString *masteredVersion;

+ (id)allVoiceInfoForLanguageCode:(id)a0;
+ (id)allVoicesForSiriSessionLanguage:(id)a0;
+ (long long)defaultGenderForOutputVoiceLanguageCode:(id)a0;
+ (id)outputVoiceIdentifierForLanguageCode:(id)a0 voiceName:(id)a1;
+ (id)voiceInfoForLanguageCode:(id)a0;
+ (id)voiceInfoForSessionLanguageCode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithLanguageCode:(id)a0;
- (id)footprintString;
- (id)genderString;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 footprint:(long long)a2 isCustom:(char)a3;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 isCustom:(char)a2;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 isCustom:(char)a2 name:(id)a3 footprint:(long long)a4 contentVersion:(id)a5 masteredVersion:(id)a6;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 name:(id)a2 footprint:(long long)a3 isCustom:(char)a4;
- (char)isLanguageAndGenderEqual:(id)a0;
- (char)isMatchForSiriVoice:(id)a0;
- (char)isValidForSiriSessionLanguage:(id)a0;

@end
