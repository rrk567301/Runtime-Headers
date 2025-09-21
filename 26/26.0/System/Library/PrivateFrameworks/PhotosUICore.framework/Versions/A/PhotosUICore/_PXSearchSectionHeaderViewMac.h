@class NSTextField, NSString, NSVisualEffectView, PXZoomablePhotosViewModel;

@interface _PXSearchSectionHeaderViewMac : NSView <PXChangeObserver>

@property (readonly, nonatomic) NSTextField *contentLabel;
@property (readonly, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
