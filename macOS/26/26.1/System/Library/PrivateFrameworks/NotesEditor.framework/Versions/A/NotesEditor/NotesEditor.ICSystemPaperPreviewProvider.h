@class ICTextFindingResult, ICMacBaseTextView, NSImage;

@interface NotesEditor.ICSystemPaperPreviewProvider : NSObject <ICTextPreviewProvider> {
    void /* unknown type, empty encoding */ attachment;
}

- (void).cxx_destruct;
- (id)init;
- (void)imageForTextPreviewUsingFindingResult:(ICTextFindingResult *)a0 inTextView:(ICMacBaseTextView *)a1 completion:(void (^)(NSImage *))a2;

@end
