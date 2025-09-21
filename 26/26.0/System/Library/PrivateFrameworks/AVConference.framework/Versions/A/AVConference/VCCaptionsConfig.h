@class NSLocale;

@interface VCCaptionsConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned char taskHint;
@property (nonatomic) unsigned char usage;
@property (nonatomic) BOOL languageDetectorEnabled;
@property (nonatomic) unsigned long long languageDetectorReportingFrequency;
@property (nonatomic, getter=isExplicitLanguageFilterEnabled) BOOL explicitLanguageFilterEnabled;
@property (nonatomic) unsigned char callType;
@property (nonatomic, getter=isFormatForNewLinesEnabled) BOOL formatForNewLinesEnabled;

+ (unsigned char)callTypeFromClientCallType:(unsigned char)a0;
+ (id)deserializeConfiguration:(id)a0;
+ (BOOL)isValidUsage:(unsigned char)a0;
+ (id)serializeConfiguration:(id)a0;
+ (unsigned char)taskHintFromClientTaskHint:(unsigned char)a0;
+ (unsigned char)usageFromClientUsage:(unsigned char)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientConfig:(id)a0;
- (BOOL)isEqualToCaptionsConfig:(id)a0;

@end
