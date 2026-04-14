@protocol AVFunctionBarTrackControlling, AVTimeControlling;

@interface AVFunctionBarTrackViewController : NSViewController {
    BOOL _hasRoundedCorners;
}

@property (retain) id<AVFunctionBarTrackControlling, AVTimeControlling> playerController;
@property BOOL hasRoundedCorners;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (Class)_trackViewClass;

@end
