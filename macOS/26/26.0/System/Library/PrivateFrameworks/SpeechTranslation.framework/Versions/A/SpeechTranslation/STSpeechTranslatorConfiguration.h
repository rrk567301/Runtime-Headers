@class NSURL, NSLocale;

@interface STSpeechTranslatorConfiguration : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL omitTranslatedAudio;
@property (nonatomic, readonly) NSLocale *sourceLocale;
@property (nonatomic, readonly) NSLocale *targetLocale;
@property (nonatomic, readonly) NSURL *offlineMTModel;
@property (nonatomic) long long taskHint;
@property (nonatomic, readonly) NSLocale *_sourceLocale;
@property (nonatomic, readonly) NSLocale *_targetLocale;
@property (nonatomic, readonly) NSURL *_offlineMTModel;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 offlineMTModel:(id)a2 taskHint:(long long)a3;

@end
