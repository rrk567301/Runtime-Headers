@class IKPictureTaker;

@interface IKPictureTakerController : NSObject {
    IKPictureTaker *_pictureTaker;
}

- (void)dealloc;
- (id)init;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)pictureTaker;
- (void)stopLiveCapture;
- (BOOL)isTakingPicture;
- (id)pictureTakerViewBox;
- (id)pictureTakerView;
- (BOOL)takePicture;
- (BOOL)startLiveCapture;

@end
