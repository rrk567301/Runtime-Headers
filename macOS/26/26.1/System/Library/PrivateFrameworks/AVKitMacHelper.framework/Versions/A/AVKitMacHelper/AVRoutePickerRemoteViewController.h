@class AVOutputContext;
@protocol AVRoutePickerViewRemoteViewControllerDelegate;

@interface AVRoutePickerRemoteViewController : NSRemoteViewController <AVRoutePickerViewHostInterface>

@property (weak, nonatomic) id<AVRoutePickerViewRemoteViewControllerDelegate> delegate;
@property (retain, nonatomic) AVOutputContext *outputContext;
@property (nonatomic) BOOL prioritizesVideoDevices;
@property (nonatomic) BOOL revealsAllRoutes;
@property (nonatomic) long long routingMethod;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)startDiscoveringAudioRoutes;
- (void)stopDiscoveringAudioRoutes;

@end
