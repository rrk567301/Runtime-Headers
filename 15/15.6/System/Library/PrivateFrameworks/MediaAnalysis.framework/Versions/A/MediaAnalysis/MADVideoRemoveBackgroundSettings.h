@interface MADVideoRemoveBackgroundSettings : NSObject {
    char _autoplayTrimEnabled;
    char _visionTrimEnabled;
    unsigned long long _visionTrimWindow;
    double _visionTrimThreshold;
    double _visionTrimMininumDuration;
    double _visionPreferredVideoQualityThreshold;
    double _visionPreferredLowQualityProportionThreshold;
    double _visionPreferredWorstFrameScoreThreshold;
    double _photosPreferredThreshold;
}

@property (class, readonly, nonatomic) char autoplayTrimEnabled;
@property (class, readonly, nonatomic) char visionTrimEnabled;
@property (class, readonly, nonatomic) unsigned long long visionTrimWindow;
@property (class, readonly, nonatomic) double visionTrimThreshold;
@property (class, readonly, nonatomic) double visionTrimMininumDuration;
@property (class, readonly, nonatomic) double visionPreferredVideoQualityThreshold;
@property (class, readonly, nonatomic) double visionPreferredLowQualityProportionThreshold;
@property (class, readonly, nonatomic) double visionPreferredWorstFrameScoreThreshold;
@property (class, readonly, nonatomic) double photosPreferredThreshold;

+ (id)sharedSettings;

- (id)init;

@end
