@class NSString;

@interface SiriTTSSynthesisVoice : NSObject <NSCopying, NSSecureCoding> {
    void /* function */ language;
    void /* function */ name;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long footprint;
@property (nonatomic) long long type;
@property (nonatomic) long long gender;
@property (nonatomic) long long version;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *assetKey;

+ (int)voiceEnumForName:(id)a0;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 name:(id)a1;
- (id)siriVoiceSimilarInLanguage:(id)a0;

@end
