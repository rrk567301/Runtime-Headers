@class NSString, NSLocale;

@interface AVCCaptionsLanguageDetectorResults : NSObject

@property (readonly, nonatomic) double utteranceStartTimestamp;
@property (readonly, nonatomic) double utteranceDuration;
@property (readonly, nonatomic) NSLocale *dominantLocale;
@property (readonly, nonatomic) double dominantLocaleConfidence;
@property (readonly, nonatomic) NSString *detectedLanguageCode;

- (void)dealloc;
- (id)initWithLanguageDetectorResults:(id)a0;

@end
