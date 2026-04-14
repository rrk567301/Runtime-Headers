@class AVTrimView;

@interface AVTrimIndicatorAccessibilityElement : NSObject {
    AVTrimView *_trimView;
    unsigned long long _part;
}

@property (readonly, nonatomic) AVTrimView *trimView;
@property (readonly, nonatomic) unsigned long long part;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithTrimView:(id)a0 part:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityRect;

@end
