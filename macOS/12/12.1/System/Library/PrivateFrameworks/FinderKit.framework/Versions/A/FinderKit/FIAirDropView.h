@class FIAirDropViewGutsController, NSArray, NSImage, NSString, NSIndexSet, NSObject, FI_TKeyValueObserverGlue;
@protocol FIAirDropViewDelegate;

@interface FIAirDropView : NSView {
    id _controller;
    id _reserved;
    FIAirDropViewGutsController *_gutsController;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _isTransferInProgressObserver;
}

@property (weak) id<FIAirDropViewDelegate> delegate;
@property (copy) NSArray *urlsToSend;
@property (readonly, nonatomic) BOOL isTransferInProgress;
@property (copy) NSImage *largeThumbnail;
@property (copy) NSImage *mediumThumbnail;
@property (copy) NSImage *smallThumbnail;
@property (copy) NSString *clientBundleID;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)send;
- (id)recipientNames;
- (id)clientBundleID;
- (void)setClientBundleID:(id)a0;
- (id)smallThumbnail;
- (void)setSmallThumbnail:(id)a0;
- (id)urlsToSend;
- (void)setUrlsToSend:(id)a0;
- (id)largeThumbnail;
- (void)setLargeThumbnail:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fileImageFrame;
- (void)_commonAirDropViewInit;
- (void)setIsTransferInProgress:(BOOL)a0;

@end
