@class NSNumber, NSString, NSDate;

@interface SSVoiceMemosResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *durationInSeconds;
@property (retain, nonatomic) NSString *transcription;

+ (id)bundleId;
+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildDescriptions;
- (id)buildTitle;

@end
