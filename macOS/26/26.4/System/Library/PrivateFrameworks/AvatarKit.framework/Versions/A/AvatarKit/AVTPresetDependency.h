@class AVTPreset, NSString, NSDictionary;

@interface AVTPresetDependency : NSObject {
    float _morphVariantIntensity;
    long long _category;
    AVTPreset *_preset;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    NSDictionary *_visibilityRules;
}

- (void).cxx_destruct;
- (id)description;

@end
