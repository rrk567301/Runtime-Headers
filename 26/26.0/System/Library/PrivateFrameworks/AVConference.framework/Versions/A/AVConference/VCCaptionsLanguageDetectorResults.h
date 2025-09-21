@class NSString, NSLocale;

@interface VCCaptionsLanguageDetectorResults : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double utteranceStartTimestamp;
@property (readonly, nonatomic) double utteranceDuration;
@property (readonly, nonatomic) NSLocale *dominantLocale;
@property (readonly, nonatomic) double dominantLocaleConfidence;
@property (readonly, nonatomic) NSString *detectedLanguageCode;

+ (id)archivedTranscription:(id)a0 error:(id *)a1;
+ (id)unarchivedTranscriptionFromData:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDetectedLanguageCode:(id)a0 dominantLocale:(id)a1 dominantLocaleConfidence:(double)a2 utteranceStartTimestamp:(double)a3 utteranceDuration:(double)a4;
- (id)initWithSFLanguageDetectorResult:(id)a0;

@end
