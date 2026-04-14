@class IKPictureTaker;

@interface IKPictureTakerController : NSObject {
    IKPictureTaker *_pictureTaker;
}

- (void)dealloc;
- (id)init;
- (id)firstKeyView;
- (id)lastKeyView;
- (BOOL)isTakingPicture;
- (void)stopLiveCapture;
- (id)pictureTaker;
- (id)pictureTakerView;
- (id)pictureTakerViewBox;
- (BOOL)startLiveCapture;
- (BOOL)takePicture;

@end
