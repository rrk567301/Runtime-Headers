@class NSString, NSError, NSURL;

@interface NSWindowTitleController : NSObject {
    NSString *_title;
    NSString *_subtitle;
    long long _documentEditingState;
    NSError *_documentAutosavingError;
    NSError *_nonModalDocumentError;
    NSURL *_representedURL;
    BOOL _documentEdited;
    BOOL _showsAutosaveButton;
}

@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property long long documentEditingState;
@property (retain) NSError *documentAutosavingError;
@property (retain) NSError *nonModalDocumentError;
@property (getter=isDocumentEdited) BOOL documentEdited;
@property BOOL showsAutosaveButton;
@property (copy) NSURL *representedURL;

- (void)dealloc;
- (id)init;
- (void)_propertiesChanged;
- (void)setDocumentEditingState:(long long)a0 animate:(BOOL)a1;
- (void)_propertiesChanged:(BOOL)a0;

@end
