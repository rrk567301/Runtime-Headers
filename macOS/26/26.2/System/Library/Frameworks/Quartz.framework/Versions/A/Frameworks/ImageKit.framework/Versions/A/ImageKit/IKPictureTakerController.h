@class IKPictureTaker;

@interface IKPictureTakerController : NSObject {
    IKPictureTaker *_pictureTaker;
}

- (id)init;
- (void)dealloc;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)stopLiveCapture;
- (BOOL)isTakingPicture;
- (id)pictureTaker;
- (id)pictureTakerView;
- (id)pictureTakerViewBox;
- (BOOL)startLiveCapture;
- (BOOL)takePicture;

@end
