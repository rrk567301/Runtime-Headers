@interface FigCaptureCMIOExtensionSessionConfiguration : NSObject

@property (nonatomic) struct { int width; int height; } dimensions;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic) BOOL manualCinematicFramingEnabled;
@property (nonatomic) BOOL deskCamEnabled;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) int cinematicFramingControlMode;
@property (nonatomic) float manualFramingPanningAngleX;
@property (nonatomic) float manualFramingPanningAngleY;
@property (nonatomic) double manualFramingDefaultZoomFactor;
@property (nonatomic) BOOL gazeSelectionEnabled;
@property (nonatomic) int overheadCameraMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputFramingRectOfInterest;
@property (nonatomic) BOOL faceDrivenAEAFEnabled;

@end
