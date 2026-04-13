@class NSObject;
@protocol AVCameraListDelegate;

@interface AVCameraList : NSObject

@property NSObject<AVCameraListDelegate> *delegate;

+ (void)initialize;
+ (id)avCameraList;

- (void)dealloc;
- (void)registerListeners;
- (void)removeListeners;
- (void)refreshListeners;
- (id)cameraList;

@end
