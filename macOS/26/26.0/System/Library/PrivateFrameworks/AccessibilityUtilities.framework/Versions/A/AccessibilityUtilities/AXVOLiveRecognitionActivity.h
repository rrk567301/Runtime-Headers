@class NSString;

@interface AXVOLiveRecognitionActivity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL automaticFlashlightEnabled;
@property (nonatomic) BOOL scenes;
@property (nonatomic) BOOL sceneFeedbacksSpeech;
@property (nonatomic) BOOL sceneFeedbacksBraille;
@property (nonatomic) BOOL peopleDetection;
@property (nonatomic) BOOL peopleFeedbacksSpeech;
@property (nonatomic) BOOL peopleFeedbacksBraille;
@property (nonatomic) BOOL peopleFeedbacksSounds;
@property (nonatomic) BOOL peopleFeedbacksHaptics;
@property (nonatomic) BOOL doorsDetection;
@property (nonatomic) BOOL doorsFeedbacksSpeech;
@property (nonatomic) BOOL doorsFeedbacksBraille;
@property (nonatomic) BOOL doorsFeedbacksSounds;
@property (nonatomic) BOOL doorsFeedbacksHaptics;
@property (nonatomic) BOOL furnitureDetection;
@property (nonatomic) BOOL furnitureFeedbacksSpeech;
@property (nonatomic) BOOL furnitureFeedbacksBraille;
@property (nonatomic) BOOL furnitureFeedbacksSounds;
@property (nonatomic) BOOL furnitureFeedbacksHaptics;
@property (nonatomic) BOOL textDetection;
@property (nonatomic) BOOL textFeedbacksSpeech;
@property (nonatomic) BOOL textFeedbacksBraille;
@property (nonatomic) BOOL pointAndSpeak;
@property (nonatomic) BOOL pointAndSpeakFeedbacksSpeech;
@property (nonatomic) BOOL pointAndSpeakFeedbacksBraille;
@property (nonatomic) BOOL pointAndSpeakFeedbacksSounds;
@property (nonatomic) BOOL pointAndSpeakFeedbacksHaptics;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
