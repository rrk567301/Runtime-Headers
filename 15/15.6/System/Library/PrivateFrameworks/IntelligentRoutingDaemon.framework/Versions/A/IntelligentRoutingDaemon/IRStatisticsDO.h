@class NSDate;

@interface IRStatisticsDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long numberOfContextChanges;
@property (readonly, nonatomic) long long numberOfMiLoPredictions;
@property (readonly, nonatomic) long long numberOfMiLoPredictionsInUpdatesMode;
@property (readonly, nonatomic) long long lastMiLoLSLItems;
@property (readonly, nonatomic) long long lastMiLoQualityReasonBitmap;
@property (readonly, nonatomic) long long lastMiLoQuality;
@property (readonly, nonatomic) long long lastMiLoModels;
@property (readonly, nonatomic) long long timeInUpdatesModeInSeconds;
@property (readonly, nonatomic) long long numberOfPickerChoiceEvents;
@property (readonly, nonatomic) long long numberOfCorrectPickerChoiceEvents;
@property (readonly, nonatomic) NSDate *lastClearDate;

+ (id)statisticsDOWithNumberOfContextChanges:(long long)a0 numberOfMiLoPredictions:(long long)a1 numberOfMiLoPredictionsInUpdatesMode:(long long)a2 lastMiLoLSLItems:(long long)a3 lastMiLoQualityReasonBitmap:(long long)a4 lastMiLoQuality:(long long)a5 lastMiLoModels:(long long)a6 timeInUpdatesModeInSeconds:(long long)a7 numberOfPickerChoiceEvents:(long long)a8 numberOfCorrectPickerChoiceEvents:(long long)a9 lastClearDate:(id)a10;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementLastClearDate:(id)a0;
- (id)copyWithReplacementLastMiLoLSLItems:(long long)a0;
- (id)copyWithReplacementLastMiLoModels:(long long)a0;
- (id)copyWithReplacementLastMiLoQuality:(long long)a0;
- (id)copyWithReplacementLastMiLoQualityReasonBitmap:(long long)a0;
- (id)copyWithReplacementNumberOfContextChanges:(long long)a0;
- (id)copyWithReplacementNumberOfCorrectPickerChoiceEvents:(long long)a0;
- (id)copyWithReplacementNumberOfMiLoPredictions:(long long)a0;
- (id)copyWithReplacementNumberOfMiLoPredictionsInUpdatesMode:(long long)a0;
- (id)copyWithReplacementNumberOfPickerChoiceEvents:(long long)a0;
- (id)copyWithReplacementTimeInUpdatesModeInSeconds:(long long)a0;
- (id)initWithNumberOfContextChanges:(long long)a0 numberOfMiLoPredictions:(long long)a1 numberOfMiLoPredictionsInUpdatesMode:(long long)a2 lastMiLoLSLItems:(long long)a3 lastMiLoQualityReasonBitmap:(long long)a4 lastMiLoQuality:(long long)a5 lastMiLoModels:(long long)a6 timeInUpdatesModeInSeconds:(long long)a7 numberOfPickerChoiceEvents:(long long)a8 numberOfCorrectPickerChoiceEvents:(long long)a9 lastClearDate:(id)a10;
- (char)isEqualToStatisticsDO:(id)a0;

@end
