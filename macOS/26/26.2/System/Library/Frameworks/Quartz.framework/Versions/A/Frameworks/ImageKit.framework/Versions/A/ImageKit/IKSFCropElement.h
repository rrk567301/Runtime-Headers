@class CIImage;

@interface IKSFCropElement : IKSFElement {
    id _delegate;
    unsigned int _glTexture;
    BOOL _live;
    CIImage *_image;
}

+ (id)cropElement;

- (float)rotation;
- (void)setRotation:(float)a0;
- (float)scaling;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })origin;
- (id)initFromDictionary:(id)a0;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)a0;
- (id)dictionaryRepresentation;
- (void)setScaling:(float)a0;
- (void)dealloc;
- (BOOL)useGPU;
- (void)IKDVGrabberUpdated:(id)a0;
- (void)stopLiveSession;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 rotation:(float)a1 scale:(float)a2;
- (void)startLiveSession;

@end
