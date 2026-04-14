@interface PFCropUtilitiesPosterOutputData : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveVisibleRect;
@property (readonly, nonatomic) double cropScore;
@property (readonly, nonatomic) double layoutScore;
@property (readonly, nonatomic) BOOL clockOverlapAcceptable;
@property (readonly, nonatomic) BOOL headroomEngaged;
@property (readonly, nonatomic) double adaptiveHeadroom;
@property (readonly, nonatomic) double maxClockShift;
@property (readonly, nonatomic) unsigned long long layoutVariant;
@property (readonly, nonatomic) double notificationRoom;

- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adaptiveVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropScore:(double)a2 layoutScore:(double)a3 clockOverlapAcceptable:(BOOL)a4 headroomEngaged:(BOOL)a5 adaptiveHeadroom:(double)a6 maxClockShift:(double)a7 layoutVariant:(unsigned long long)a8 notificationRoom:(double)a9;

@end
