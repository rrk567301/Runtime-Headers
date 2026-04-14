@class PTUtil, NSString, PTFaceAttributesNetwork, PTEspressoGenericExecutor, PTEffectUtil, PTVFXResources, PTHandGestureDetector, PTVFXRenderEffect;
@protocol PTEffectPersonSegmentationProvider;

@interface PTEffectResources : NSObject {
    PTFaceAttributesNetwork *_faceAttributesNetwork;
}

@property (retain) NSString *effectNetworkPath;
@property (retain) NSString *effectNetworkConfig;
@property (retain) PTEspressoGenericExecutor *effectNetwork;
@property (retain) PTEspressoGenericExecutor *segmentationNetwork;
@property (retain) PTHandGestureDetector *handGestureDetector;
@property (readonly) PTFaceAttributesNetwork *faceAttributesNetwork;
@property (retain) id<PTEffectPersonSegmentationProvider> personSegmentationProvider;
@property (retain) PTVFXRenderEffect *renderEffect;
@property (retain) PTEffectUtil *effectUtil;
@property (retain) PTUtil *util;
@property (retain) PTVFXResources *vfxResources;

- (void).cxx_destruct;

@end
