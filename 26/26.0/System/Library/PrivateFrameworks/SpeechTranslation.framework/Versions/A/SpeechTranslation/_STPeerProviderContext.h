@class STSpeechTranslatorConfiguration, NSUUID;

@interface _STPeerProviderContext : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) STSpeechTranslatorConfiguration *configuration;
@property (retain, nonatomic) NSUUID *identifier;

+ (const char *)_stringForType:(unsigned long long)a0;
+ (id)_descriptionForType:(unsigned long long)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
