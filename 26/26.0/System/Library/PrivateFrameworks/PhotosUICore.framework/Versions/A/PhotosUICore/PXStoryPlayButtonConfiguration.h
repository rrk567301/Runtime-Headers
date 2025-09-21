@class NSString, PXStoryViewModel, PXStoryPlayButtonSpec;

@interface PXStoryPlayButtonConfiguration : NSObject <PXGViewUserData>

@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryPlayButtonSpec *spec;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
