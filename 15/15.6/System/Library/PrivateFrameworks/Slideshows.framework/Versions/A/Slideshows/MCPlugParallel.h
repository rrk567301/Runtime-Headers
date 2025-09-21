@class NSString, MCContainerParallelizer;

@interface MCPlugParallel : MCPlug {
    void *mGeometry;
}

@property (copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer;
@property MCContainerParallelizer *supercontainer;
@property (nonatomic) char isTriggered;
@property (nonatomic) char resetsTimeOnTrigger;
@property (readonly) char hasAbsoluteAspectRatio;
@property (readonly) char hasValidWidth;
@property (nonatomic) char clipsContainer;
@property (nonatomic) double timeIn;
@property (nonatomic) short zIndex;
@property (nonatomic) short audioPriority;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly) double width;
@property (readonly) double height;
@property (readonly) double aspectRatio;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double positionZ;
@property (nonatomic) double zPosition;
@property (nonatomic) double rotationX;
@property (nonatomic) double xRotationAngle;
@property (nonatomic) double rotationY;
@property (nonatomic) double yRotationAngle;
@property (nonatomic) unsigned char currentLayoutIndex;
@property (readonly) unsigned char countOfLayouts;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)description;
- (id)init;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (double)aspectRatioForParentAspectRatio:(double)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)setHeight:(double)a0 andAbsoluteAspectRatio:(double)a1;
- (void)setWidth:(double)a0 andAbsoluteAspectRatio:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForParentAspectRatio:(double)a0;

@end
