@class MKAttributedStringVibrancySplitter;

@interface MKAttributedStringBlendingConfiguration : NSObject {
    MKAttributedStringVibrancySplitter *_vibrancySplitter;
    long long _labelBlendingMode;
}

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 appearance:(id)a1 blendingMode:(long long)a2;
- (void)applyToBackgroundTextField:(id)a0 foregroundTextField:(id)a1;

@end
