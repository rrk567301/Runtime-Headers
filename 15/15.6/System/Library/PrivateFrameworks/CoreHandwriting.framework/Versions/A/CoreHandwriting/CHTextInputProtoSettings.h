@interface CHTextInputProtoSettings : NSObject

@property (readonly, nonatomic) char isScribbleActive;
@property (readonly, nonatomic) char autoLineBreakEnabled;
@property (readonly, nonatomic) char autoLineBreakRequireWeakCursor;
@property (readonly, nonatomic) double autoLineBreakMinVerticalDistance;
@property (readonly, nonatomic) double autoLineBreakDualBreakVerticalDistance;
@property (readonly, nonatomic) double autoLineBreakAreaWidthFactor;
@property (readonly, nonatomic) char lineBreakVerticalBarGestureEnabled;
@property (readonly, nonatomic) char lineBreakVerticalBarUpToDelete;
@property (readonly, nonatomic) double subwordGestureEndingSpeedRange;
@property (readonly, nonatomic) double subwordGestureSpeedThreshold;
@property (readonly, nonatomic) char preventLeftoverCharsInSubwordGestures;

+ (id)sharedSettings;

@end
