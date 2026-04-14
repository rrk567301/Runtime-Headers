@class IKPictureTaker;

@interface IKPictureTakerController : NSObject {
    IKPictureTaker *_pictureTaker;
}

- (void)dealloc;
- (id)init;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)stopLiveCapture;
- (BOOL)takePicture;
- (BOOL)isTakingPicture;
- (BOOL)startLiveCapture;
- (id)pictureTaker;
- (id)pictureTakerViewBox;
- (id)pictureTakerView;

@end
