@class NSNumber, NSAppearance, NSViewController;

@interface _NSSplitViewItemPrivateData : NSObject {
    NSViewController *_viewController;
    float _holdingPriority;
    NSNumber *_overrideHoldingPriority;
    id _animator;
    id _animationsDictionary;
    long long _currentAnimationCount;
    double _minimumThickness;
    double _maximumThickness;
    double _automaticMaximumThickness;
    double _preferredThicknessFraction;
    long long _behavior;
    long long _collapseBehavior;
    NSAppearance *_appearance;
    long long _titlebarSeparatorStyle;
    unsigned char _prefersCollapsesToOverlay : 1;
    unsigned char _hasUserSetSize : 1;
    unsigned char _canCollapseFromWindowResize : 1;
    unsigned char _hasBaseVibrancyEffect : 1;
    unsigned char _allowsFullHeightLayout : 1;
    unsigned int _reserved : 27;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
