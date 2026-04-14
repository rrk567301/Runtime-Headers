@protocol VKVectorOverlayDelegate;

@interface VKVectorOverlayData : NSObject {
    long long _blendMode;
}

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<VKVectorOverlayDelegate> delegate;
@property (nonatomic) long long blendMode;

- (void).cxx_destruct;
- (id)init;

@end
