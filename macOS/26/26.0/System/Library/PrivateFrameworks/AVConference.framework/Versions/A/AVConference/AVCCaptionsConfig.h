@class NSLocale;

@interface AVCCaptionsConfig : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned char taskHint;
@property (nonatomic) unsigned char usage;
@property (nonatomic) BOOL languageDetectorEnabled;
@property (nonatomic) unsigned long long languageDetectorReportingFrequency;
@property (nonatomic, getter=isExplicitLanguageFilterEnabled) BOOL explicitLanguageFilterEnabled;
@property (nonatomic) unsigned char callType;
@property (nonatomic, getter=isFormatForNewLinesEnabled) BOOL formatForNewLinesEnabled;

+ (const char *)cStringFromUsage:(unsigned char)a0;
+ (unsigned char)callTypeFromServerCallType:(unsigned char)a0;
+ (id)deserializeLocale:(id)a0;
+ (id)serializeConfiguration:(id)a0;
+ (id)serializeLocale:(id)a0;
+ (id)stringFromUsage:(unsigned char)a0;
+ (unsigned char)taskHintFromServerTaskHint:(unsigned char)a0;
+ (unsigned char)usageFromServerUsage:(unsigned char)a0;

- (void)dealloc;
- (id)description;
- (id)initWithServerConfig:(id)a0;

@end
