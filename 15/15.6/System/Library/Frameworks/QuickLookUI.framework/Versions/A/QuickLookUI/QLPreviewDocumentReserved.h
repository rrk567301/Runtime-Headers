@class QLPreviewView, QLPreviewPasswordViewController, QLPreview, NSString, QLDisplayBundle;
@protocol QLPreviewItem;

@interface QLPreviewDocumentReserved : NSObject {
    id<QLPreviewItem> item;
    unsigned long long state;
    QLDisplayBundle *loadingDisplayBundle;
    QLDisplayBundle *displayBundle;
    QLPreviewView *previewView;
    char externalDocument;
    QLPreviewPasswordViewController *passwordViewController;
    NSString *password;
    long long initialActivity;
    char wasEdited;
    char observingDocumentDirty;
}

@property (retain) QLPreview *preview;

- (void)dealloc;
- (void).cxx_destruct;

@end
