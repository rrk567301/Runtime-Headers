@class NSArray, NSString, NSURL, UTType, NSView, NSPreviewHostViewController;
@protocol NSOpenSavePanelDelegate;

@interface NSFinderSavePanelBase : NSPanel {
    struct vector<NSURLAnnex, std::allocator<NSURLAnnex>> { struct *__begin_; struct *__end_; struct *__cap_; } _urlAnnexes;
}

@property (retain) NSArray *securityScopedURLs;
@property (retain) NSPreviewHostViewController *previewHostViewController;
@property (weak) id<NSOpenSavePanelDelegate> delegate;
@property (copy) NSString *title;
@property (readonly, copy) NSArray *URLs;
@property (readonly, copy) NSURL *URL;
@property (copy) NSURL *directoryURL;
@property (copy) NSArray *allowedContentTypes;
@property BOOL allowsOtherFileTypes;
@property (copy) UTType *currentContentType;
@property (retain) NSView *accessoryView;
@property BOOL canCreateDirectories;
@property BOOL canSelectHiddenExtension;
@property (getter=isExtensionHidden) BOOL extensionHidden;
@property BOOL treatsFilePackagesAsDirectories;
@property (copy) NSString *prompt;
@property (copy) NSString *nameFieldLabel;
@property (copy) NSString *nameFieldStringValue;
@property (copy) NSString *message;
@property BOOL showsHiddenFiles;
@property BOOL showsTagField;
@property (copy) NSArray *tagNames;
@property (copy) NSArray *allowedFileTypes;
@property (getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;
@property BOOL hidesSharedSection;
@property (setter=_setShowsFormats:) BOOL _showsFormats;
@property (copy, setter=_setFormatFileTypes:) NSArray *_formatFileTypes;
@property (copy, setter=_setFormatTitles:) NSArray *_formatTitles;
@property (copy, setter=_setSaveFormatType:) NSString *_saveFormatType;
@property (setter=_setShouldShowOptionsButton:) BOOL _shouldShowOptionsButton;
@property (copy) NSArray *spi_customActions;
@property (readonly) NSString *currentExtension;
@property (setter=_setShowsContentTypesExclusive:) BOOL _showsContentTypesExclusive;
@property (copy, setter=_setDontSaveButtonTitle:) NSString *_dontSaveButtonTitle;

+ (BOOL)finderIsRunning;
+ (struct { unsigned int x0[8]; })finderAuditToken;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;

@end
