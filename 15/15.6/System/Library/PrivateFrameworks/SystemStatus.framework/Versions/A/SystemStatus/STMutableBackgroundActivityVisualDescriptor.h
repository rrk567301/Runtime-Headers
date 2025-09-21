@class NSString, STBackgroundActivityVisualDescriptorColorRepresentation, NSSet;

@interface STMutableBackgroundActivityVisualDescriptor : STBackgroundActivityVisualDescriptor

@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *textLabel;
@property (retain, nonatomic) STBackgroundActivityVisualDescriptorColorRepresentation *backgroundColorRepresentation;
@property (nonatomic) double verticalOffsetInPixels;
@property (nonatomic) double fontSizeAdjustment;
@property (nonatomic) char prefersToKeepContentVisible;
@property (copy, nonatomic) NSString *preferredVisualEffectName;
@property (copy, nonatomic) NSString *preferredContinuousAnimationName;
@property (nonatomic) char prefersToSuppressDefaultUserInteractionHandler;
@property (copy, nonatomic) NSSet *crossfadableActivities;
@property (nonatomic) char prefersToSuppressPulse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImageName:(id)a0;
- (void)setTextLabel:(id)a0;
- (void)setSystemImageName:(id)a0;
- (void)setFontSizeAdjustment:(double)a0;
- (void)setPrefersToKeepContentVisible:(char)a0;
- (void)setPackageName:(id)a0;
- (void)setBackgroundColorRepresentation:(id)a0;
- (void)setCrossfadableActivities:(id)a0;
- (void)setPreferredContinuousAnimationName:(id)a0;
- (void)setPreferredVisualEffectName:(id)a0;
- (void)setPrefersToSuppressDefaultUserInteractionHandler:(char)a0;
- (void)setPrefersToSuppressPulse:(char)a0;
- (void)setVerticalOffsetInPixels:(double)a0;

@end
