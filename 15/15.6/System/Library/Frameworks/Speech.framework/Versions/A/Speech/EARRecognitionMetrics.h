@class NSArray, NSNumber;

@interface EARRecognitionMetrics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *allItnRunIntervals;
@property (readonly, copy, nonatomic) NSArray *pauseDurations;
@property (readonly, nonatomic) NSNumber *itnDurationInNs;
@property (readonly, nonatomic) char isEmojiPersonalizationUsed;
@property (readonly, nonatomic) char isEmojiDisambiguationUsed;
@property (readonly, nonatomic) char isEmojiExpectedButNotRecognized;
@property (readonly, copy, nonatomic) NSArray *recognizedEmojis;
@property (readonly, nonatomic) double cpuMillionInstructionsPerSecond;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecognitionMetrics:(id)a0 cpuInstructions:(double)a1;

@end
