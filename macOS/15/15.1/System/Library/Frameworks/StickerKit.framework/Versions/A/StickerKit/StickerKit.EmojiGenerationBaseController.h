@interface StickerKit.EmojiGenerationBaseController : NSViewController {
    void /* unknown type, empty encoding */ useCachedImagesForDebugging;
    void /* unknown type, empty encoding */ pillVC;
    void /* unknown type, empty encoding */ pillViewModel;
    void /* unknown type, empty encoding */ pillContainer;
    void /* unknown type, empty encoding */ promptEntryView;
    void /* unknown type, empty encoding */ carouselVC;
    void /* unknown type, empty encoding */ feedbackHelper;
    void /* unknown type, empty encoding */ topLabel;
    void /* unknown type, empty encoding */ ambiguity;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isGenmojiAvailable;
    void /* unknown type, empty encoding */ mouseIsInside;
    void /* unknown type, empty encoding */ captionText;
    void /* unknown type, empty encoding */ isConnectedToNetwork;
    void /* unknown type, empty encoding */ networkMonitor;
    void /* unknown type, empty encoding */ isShowingErrorState;
    void /* unknown type, empty encoding */ currentEmojiQueryInfo;
    void /* unknown type, empty encoding */ typingTask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_generationCache;
    void /* unknown type, empty encoding */ showSkinColorControl;
    void /* unknown type, empty encoding */ noResultsView;
    void /* unknown type, empty encoding */ noPersonView;
    void /* unknown type, empty encoding */ skinColorSelectionVC;
    void /* unknown type, empty encoding */ skinColorSelectionView;
    void /* unknown type, empty encoding */ searchQuery;
    void /* unknown type, empty encoding */ promptCharacterSet;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;

@end
