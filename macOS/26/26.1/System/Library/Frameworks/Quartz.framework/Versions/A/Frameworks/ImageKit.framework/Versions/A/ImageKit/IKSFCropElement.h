@class CIImage;

@interface IKSFCropElement : IKSFElement {
    id _delegate;
    unsigned int _glTexture;
    BOOL _live;
    CIImage *_image;
}

+ (id)cropElement;

- (float)rotation;
- (id)dictionaryRepresentation;
- (void)setRotation:(float)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })origin;
- (void)setScaling:(float)a0;
- (void)dealloc;
- (float)scaling;
- (id)initFromDictionary:(id)a0;
- (id)init;
- (BOOL)useGPU;
- (void)IKDVGrabberUpdated:(id)a0;
- (void)stopLiveSession;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 rotation:(float)a1 scale:(float)a2;
- (void)startLiveSession;

@end
