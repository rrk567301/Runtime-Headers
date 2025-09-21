@class IKPictureTaker;

@interface IKPictureTakerController : NSObject {
    IKPictureTaker *_pictureTaker;
}

- (void)dealloc;
- (id)init;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)stopLiveCapture;
- (char)isTakingPicture;
- (id)pictureTaker;
- (id)pictureTakerView;
- (id)pictureTakerViewBox;
- (char)startLiveCapture;
- (char)takePicture;

@end
