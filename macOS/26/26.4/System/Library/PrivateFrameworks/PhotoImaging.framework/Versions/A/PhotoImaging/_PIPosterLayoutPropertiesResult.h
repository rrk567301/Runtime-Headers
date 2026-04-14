@class NSString;
@protocol NURenderStatistics;

@interface _PIPosterLayoutPropertiesResult : _NURenderResult <PIPosterLayoutPropertiesResult>

@property (nonatomic) unsigned long long layoutVariant;
@property (nonatomic) double maxClockShift;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveTimeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
