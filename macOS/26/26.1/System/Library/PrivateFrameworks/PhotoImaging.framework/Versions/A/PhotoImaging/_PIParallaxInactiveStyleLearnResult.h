@class NSData, NSString;
@protocol NURenderStatistics;

@interface _PIParallaxInactiveStyleLearnResult : _NURenderResult <PIParallaxInactiveStyleLearnResult>

@property (readonly, nonatomic) NSData *styleData;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } styleFrame;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStyleData:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
