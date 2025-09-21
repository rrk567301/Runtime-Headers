@class NSValue, NSNumber;

@interface AVOutputDeviceViewAreaInfo : NSObject

@property (readonly, nonatomic) NSValue *viewArea;
@property (readonly, nonatomic) char transitionControl;
@property (readonly, nonatomic) char supportsFocusTransfer;
@property (readonly, nonatomic) NSNumber *statusBarEdge;
@property (readonly, nonatomic) NSValue *safeArea;

- (void)dealloc;
- (id)initWithViewArea:(id)a0 transitionControl:(char)a1 supportsFocusTransfer:(char)a2 statusBarEdge:(id)a3 safeArea:(id)a4;

@end
