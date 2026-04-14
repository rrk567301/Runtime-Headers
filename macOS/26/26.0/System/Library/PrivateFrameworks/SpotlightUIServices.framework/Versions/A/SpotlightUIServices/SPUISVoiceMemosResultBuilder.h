@class NSNumber, NSString, NSDate;

@interface SPUISVoiceMemosResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *durationInSeconds;
@property (retain, nonatomic) NSString *transcription;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)buildTitle;

@end
