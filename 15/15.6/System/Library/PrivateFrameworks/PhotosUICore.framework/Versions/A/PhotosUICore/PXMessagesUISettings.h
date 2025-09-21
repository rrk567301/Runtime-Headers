@class NSString, NSArray;

@interface PXMessagesUISettings : PXSettings {
    NSArray *_cachedHorizontalOffsets;
}

@property (nonatomic) long long dataSourceType;
@property (nonatomic) unsigned long long stackedItemsCount;
@property (nonatomic) double normalizedStackSizeTransform;
@property (nonatomic) double normalizedStackVerticalOffset;
@property (nonatomic) double verticalContentInsets;
@property (nonatomic) char enableDebugTapbacksStack;
@property (nonatomic) double rotationAngle;
@property (nonatomic) char applyRotationToFirstAndLast;
@property (nonatomic) double stackShadowYOffset;
@property (nonatomic) double stackShadowBlurRadius;
@property (nonatomic) double stackShadowAlpha;
@property (nonatomic) char renderWithCA;
@property (copy, nonatomic) NSString *horizontalOffsetString;
@property (readonly, nonatomic) NSArray *horizontalOffsets;
@property (nonatomic) double normalizedPageWidth;
@property (nonatomic) long long pagingBehavior;
@property (nonatomic) double pagingVelocityThreshold;
@property (nonatomic) char bestCropRectEnabled;
@property (nonatomic) char aspectTilesEnabled;
@property (nonatomic) double gridShadowXOffset;
@property (nonatomic) double gridShadowYOffset;
@property (nonatomic) double gridShadowBlurRadius;
@property (nonatomic) double gridShadowAlpha;
@property (nonatomic) char enableDebugTapbacksGrid;
@property (nonatomic) double minItemSize;
@property (nonatomic) double comfortableFitPercentage;
@property (nonatomic) long long minColumns;
@property (nonatomic) long long maxColumns;
@property (nonatomic) unsigned long long transitionItemsCount;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double transitionSpringDamping;
@property (nonatomic) double transitionSpringVelocity;

+ (id)sharedInstance;
+ (id)transientProperties;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
