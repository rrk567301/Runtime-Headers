@class FIAirDropViewGutsController, NSArray, NSImage, NSString, NSIndexSet, NSObject, FI_TKeyValueObserverGlue;
@protocol FIAirDropViewDelegate;

@interface FIAirDropView : NSView {
    id _controller;
    id _reserved;
    FIAirDropViewGutsController *_gutsController;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _isTransferInProgressObserver;
}

@property (nonatomic) BOOL isTransferInProgress;
@property (weak) id<FIAirDropViewDelegate> delegate;
@property (copy) NSArray *urlsToSend;
@property (copy) NSImage *largeThumbnail;
@property (copy) NSImage *mediumThumbnail;
@property (copy) NSImage *smallThumbnail;
@property (copy) NSString *clientBundleID;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)recipientNames;
- (void)send;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fileImageFrame;
- (void)_commonAirDropViewInit;

@end
