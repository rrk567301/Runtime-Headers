@class AVAssetVariant, FigAssetVariantQualifierObjC;

@interface AVAssetVariantQualifier : NSObject <NSSecureCoding, NSCopying> {
    AVAssetVariant *_variant;
    FigAssetVariantQualifierObjC *_figAssetVariantQualifier;
    long long _environmentalConditions;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long environmentalConditions;

+ (id)assetVariantQualifierForMaximumValueInKeyPath:(id)a0;
+ (id)assetVariantQualifierForMinimumValueInKeyPath:(id)a0;
+ (id)assetVariantQualifierWithPredicate:(id)a0;
+ (id)assetVariantQualifierWithVariant:(id)a0;
+ (id)predicateForAudioSampleRate:(double)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateForAudioSampleRate:(double)a0 operatorType:(unsigned long long)a1;
+ (id)predicateForBinauralAudio:(char)a0;
+ (id)predicateForBinauralAudio:(char)a0 mediaSelectionOption:(id)a1;
+ (id)predicateForChannelCount:(long long)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateForChannelCount:(long long)a0 operatorType:(unsigned long long)a1;
+ (id)predicateForDownmixAudio:(char)a0;
+ (id)predicateForDownmixAudio:(char)a0 mediaSelectionOption:(id)a1;
+ (id)predicateForImmersiveAudio:(char)a0;
+ (id)predicateForImmersiveAudio:(char)a0 mediaSelectionOption:(id)a1;
+ (id)predicateForPresentationHeight:(double)a0 operatorType:(unsigned long long)a1;
+ (id)predicateForPresentationWidth:(double)a0 operatorType:(unsigned long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_figAssetVariantQualifier;
- (id)_variant;
- (id)initWithVariant:(id)a0;

@end
