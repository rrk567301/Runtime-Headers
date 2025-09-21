@class NSString, NSURL, NSError, NSAttributedString;

@interface NSWindowTitleController : NSObject {
    NSString *_title;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    long long _documentEditingState;
    NSError *_documentAutosavingError;
    NSError *_nonModalDocumentError;
    NSURL *_representedURL;
    char _documentEdited;
    char _showsAutosaveButton;
}

@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) NSAttributedString *attributedSubtitle;
@property long long documentEditingState;
@property (retain) NSError *documentAutosavingError;
@property (retain) NSError *nonModalDocumentError;
@property (getter=isDocumentEdited) char documentEdited;
@property char showsAutosaveButton;
@property (copy) NSURL *representedURL;

- (void)dealloc;
- (id)init;
- (void)_propertiesChanged;
- (void)_propertiesChanged:(char)a0;
- (void)setDocumentEditingState:(long long)a0 animate:(char)a1;

@end
