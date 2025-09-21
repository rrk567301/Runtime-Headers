@interface PUVFXFaceLandmarksLayer : CAShapeLayer {
    id /* block */ _denormalizePoint;
}

- (void).cxx_destruct;
- (struct CGPath { } *)_createEnclosingSquarePathFromPath:(struct CGPath { } *)a0;
- (struct CGPath { } *)_createPathForLandmarkRegion:(id)a0;
- (void)_drawFaceLandmarks:(id)a0;
- (id)initWithFaceLandmarks:(id)a0 denormalizePoint:(id /* block */)a1;

@end
