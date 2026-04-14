@class NSObject;
@protocol OS_dispatch_source;

@interface CSKScrollView : NSScrollView

@property (retain, nonatomic) NSObject<OS_dispatch_source> *resizingEventsSource;
@property (nonatomic) BOOL postsDidEndResizeNotifications;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewFrameDidChangeNotification:(id)a0;

@end
