@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly, nonatomic) NSDictionary *acousticFeatures;
@property (readonly, nonatomic) double snr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpeechRecognitionFeatures:(id)a0 acousticFeatures:(id)a1 snr:(double)a2;
- (id)initWithSpeechRecognitionFeatures:(id)a0 acousticFeatures:(id)a1;

@end
