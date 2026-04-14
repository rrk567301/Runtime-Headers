@interface AKAnnotationRendererOptions : NSObject

@property (nonatomic) double availableHeadroom;
@property (nonatomic) double desiredHeadroom;
@property (nonatomic) BOOL forDisplay;
@property (nonatomic) BOOL allowHDR;
@property (readonly, nonatomic) double scaleFactor;

+ (id)defaultOptions;

@end
