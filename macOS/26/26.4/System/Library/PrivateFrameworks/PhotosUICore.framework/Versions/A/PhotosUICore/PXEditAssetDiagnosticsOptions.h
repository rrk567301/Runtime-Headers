@protocol NUScalePolicy;

@interface PXEditAssetDiagnosticsOptions : NSObject

@property (retain, nonatomic) id<NUScalePolicy> scalePolicyForRenders;
@property (nonatomic) BOOL includeOriginalRender;

- (void).cxx_destruct;
- (id)init;

@end
