@class NSString, NSImage, NSMutableDictionary, NSRemoteViewControllerWithDelegate, NSPopover;
@protocol IKPictureTakerServiceInterface;

@interface IKPictureTaker : NSPanel <NSRemoteViewControllerDelegate, IKPictureTakerHostInterface> {
    void *_ikReserved;
    NSRemoteViewControllerWithDelegate<IKPictureTakerServiceInterface> *_remoteViewController;
    id _pictureTakerDelegate;
    SEL _didEndSelector;
    void *_clientContextInfo;
    BOOL _modalMode;
    BOOL _sheetMode;
    BOOL _popoverMode;
    BOOL _mirroring;
    NSImage *_originalImage;
    NSImage *_outputImage;
    BOOL _imageHasChanged;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenCropRect;
    NSString *_recentPictureID;
    NSMutableDictionary *_pictureTakerConfiguration;
    NSPopover *_popover;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)defaultStyleMask;
+ (id)newDefaultParameters;
+ (id)pictureTaker;

- (BOOL)windowShouldClose:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)paste:(id)a0;
- (id)delegate;
- (void)copy:(id)a0;
- (BOOL)mirroring;
- (BOOL)validateMenuItem:(id)a0;
- (id)inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setDelegate:(id)a0;
- (id)init;
- (BOOL)canBecomeKeyWindow;
- (void)setInputImage:(id)a0;
- (void)close;
- (void)dealloc;
- (long long)runModal;
- (id)_cornerMask;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)isResizable;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)controller:(id)a0 terminatedWithError:(id)a1;
- (id)interfaceForController:(id)a0;
- (id)serviceInterfaceForController:(id)a0;
- (id)initWithTexture:(BOOL)a0;
- (BOOL)imageHasChanged;
- (id)recentPictureID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultContentRect;
- (void)_dismissPopoverIfVisible;
- (void)beginPictureTakerPopoverForView:(id)a0 withDelegate:(id)a1 relativeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 source:(long long)a3 didEndSelector:(SEL)a4 contextInfo:(void *)a5;
- (void)beginPictureTakerSheetForWindow:(id)a0 withDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)beginPictureTakerWithDelegate:(id)a0 didEndSelector:(SEL)a1 contextInfo:(void *)a2;
- (void)closeForCancelButton;
- (void)didEndShouldCloseSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageCroppedRect;
- (id)initWithTexture:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)notifyDelegateWithResultCode:(long long)a0;
- (void)pictureTakerCommonInit:(BOOL)a0;
- (void)pictureTakerSessionDidEndWithCode:(long long)a0;
- (void)popUpRecentsMenuForView:(id)a0 withDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)releasePopover;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenCropRect;
- (void)serviceDidLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)serviceRequestsCloseForCancelButton;
- (void)serviceRequestsCloseForDoneButtonWithOutputImage:(id)a0 imageHasChanged:(BOOL)a1 recentPictureID:(id)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 screenCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)setImageCroppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMirroring:(BOOL)a0;
- (void)tearDownRemoteViewController;
- (void)withRemoteViewController:(id /* block */)a0;

@end
