@class NSURL, NSString;

@interface NSRemoteMovePanel : NSRemotePanel

@property (copy) NSURL *URL;
@property (readonly) NSURL *finalURL;
@property (copy, nonatomic) NSURL *initialURL;
@property (copy) NSURL *directoryURL;
@property (copy) NSString *movePopupFieldLabel;

+ (id)keyPathsForPanelSettings;

- (void).cxx_destruct;
- (unsigned long long)_panelType;
- (id)serializeSettings;
- (void)panelCompletedWithRequest:(id)a0;
- (void)panelCompletedWithNewDocumentRequest;

@end
