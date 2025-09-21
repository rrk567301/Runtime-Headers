@class NSString;

@interface QLOverlayProgressDeterminateShapeLayer : CAShapeLayer <CALayerDelegate> {
    double _radius;
}

@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
