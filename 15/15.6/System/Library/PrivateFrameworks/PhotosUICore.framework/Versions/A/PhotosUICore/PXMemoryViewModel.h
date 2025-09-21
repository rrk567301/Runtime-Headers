@class NSString;
@protocol PXDisplayAsset;

@interface PXMemoryViewModel : PXObservable <PXMutableMemoryViewModel>

@property (readonly, nonatomic) NSString *localizedDateText;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) char isHighlighted;
@property (readonly, nonatomic) long long specSet;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setIsHighlighted:(char)a0;
- (void)setLocalizedTitle:(id)a0;
- (void)setVariant:(long long)a0;
- (void)setLayoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setKeyAsset:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setLocalizedDateText:(id)a0;
- (void)setSpecSet:(long long)a0;

@end
